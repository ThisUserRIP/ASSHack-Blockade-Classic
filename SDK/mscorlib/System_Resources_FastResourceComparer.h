#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Resources
{
	struct FastResourceComparer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Resources::FastResourceComparer* Default;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t GetHashCode(mscorlib::System::Object* key);
		int32_t GetHashCode(mscorlib::System::String* key);
		static int32_t HashFunction(mscorlib::System::String* key);
		int32_t Compare(mscorlib::System::Object* a, mscorlib::System::Object* b);
		int32_t Compare(mscorlib::System::String* a, mscorlib::System::String* b);
		bool Equals(mscorlib::System::String* a, mscorlib::System::String* b);
		bool Equals(mscorlib::System::Object* a, mscorlib::System::Object* b);
		static int32_t CompareOrdinal(mscorlib::System::String* a, IL2CPP::Array<uint8_t>* bytes, int32_t bCharLength);
		static int32_t CompareOrdinal(IL2CPP::Array<uint8_t>* bytes, int32_t aCharLength, mscorlib::System::String* b);
		static int32_t CompareOrdinal(uint8_t* a, int32_t byteLen, mscorlib::System::String* b);
		void _ctor();
		static void _cctor();
	};
}

