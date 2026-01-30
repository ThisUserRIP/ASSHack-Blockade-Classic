#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Collections_Generic_EqualityComparer_1.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Collections::Generic
{
	struct ByteEqualityComparer : mscorlib::System::Collections::Generic::EqualityComparer_1<mscorlib::System::Byte>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Equals(uint8_t x, uint8_t y);
		int32_t GetHashCode(uint8_t b);
		int32_t IndexOf(IL2CPP::Array<uint8_t>* array, uint8_t value, int32_t startIndex, int32_t count);
		int32_t LastIndexOf(IL2CPP::Array<uint8_t>* array, uint8_t value, int32_t startIndex, int32_t count);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		void _ctor();
	};
}

