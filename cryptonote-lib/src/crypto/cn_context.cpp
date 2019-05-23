#include <new>

#include "hash.h"

#if defined(WIN32)
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <Windows.h>
#endif

using std::bad_alloc;

namespace Crypto {

	enum {
		MAP_SIZE = SLOW_HASH_CONTEXT_SIZE + ((-SLOW_HASH_CONTEXT_SIZE) & 0xfff)
	};

#if defined(WIN32)
	cn_context::cn_context() noexcept(false) {
		data = VirtualAlloc(nullptr, MAP_SIZE, MEM_COMMIT, PAGE_READWRITE);
		if (data == nullptr) {
			throw bad_alloc();
		}
	}

	cn_context::~cn_context() {
		if (data != nullptr) {
			VirtualFree(data, 0, MEM_RELEASE);
		}
	}
#endif
}