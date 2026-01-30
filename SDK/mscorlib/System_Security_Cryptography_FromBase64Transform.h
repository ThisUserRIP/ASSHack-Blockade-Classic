#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Security_Cryptography_FromBase64TransformMode.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Security::Cryptography
{
	struct FromBase64Transform : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* _inputBuffer;
		int32_t _inputIndex;
		mscorlib::System::Security::Cryptography::FromBase64TransformMode _whitespaces;
		void _ctor();
		void _ctor(mscorlib::System::Security::Cryptography::FromBase64TransformMode whitespaces);
		int32_t get_InputBlockSize();
		int32_t get_OutputBlockSize();
		bool get_CanTransformMultipleBlocks();
		bool get_CanReuseTransform();
		int32_t TransformBlock(IL2CPP::Array<uint8_t>* inputBuffer, int32_t inputOffset, int32_t inputCount, IL2CPP::Array<uint8_t>* outputBuffer, int32_t outputOffset);
		IL2CPP::Array<uint8_t>* TransformFinalBlock(IL2CPP::Array<uint8_t>* inputBuffer, int32_t inputOffset, int32_t inputCount);
		IL2CPP::Array<uint8_t>* DiscardWhiteSpaces(IL2CPP::Array<uint8_t>* inputBuffer, int32_t inputOffset, int32_t inputCount);
		void Dispose();
		void Reset();
		void Clear();
		void Dispose(bool disposing);
		void Finalize();
	};
}

