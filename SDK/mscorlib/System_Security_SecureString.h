#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Char; };

namespace mscorlib::System::Security
{
	struct SecureString : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t length;
		bool disposed;
		IL2CPP::Array<uint8_t>* data;
		void _ctor();
		void _ctor(wchar_t* value, int32_t length);
		int32_t get_Length();
		void Dispose();
		void Encrypt();
		void Decrypt();
		void Alloc(int32_t length, bool realloc);
		IL2CPP::Array<uint8_t>* GetBuffer();
	};
}

