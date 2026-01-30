#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Security::Cryptography
{
	struct CryptoAPITransform : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_disposed;
		void _ctor();
		bool get_CanReuseTransform();
		bool get_CanTransformMultipleBlocks();
		int32_t get_InputBlockSize();
		intptr_t get_KeyHandle();
		int32_t get_OutputBlockSize();
		void Dispose();
		void Clear();
		void Dispose(bool disposing);
		int32_t TransformBlock(IL2CPP::Array<uint8_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, IL2CPP::Array<uint8_t>* outputBuffer, int32_t outputOffset);
		IL2CPP::Array<uint8_t>* TransformFinalBlock(IL2CPP::Array<uint8_t>* inputBuffer, int32_t inputOffset, int32_t inputCount);
		void Reset();
	};
}

