#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct StringComparer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::StringComparer* _invariantCulture;
			mscorlib::System::StringComparer* _invariantCultureIgnoreCase;
			mscorlib::System::StringComparer* _ordinal;
			mscorlib::System::StringComparer* _ordinalIgnoreCase;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::StringComparer* get_InvariantCultureIgnoreCase();
		static mscorlib::System::StringComparer* get_CurrentCulture();
		static mscorlib::System::StringComparer* get_CurrentCultureIgnoreCase();
		static mscorlib::System::StringComparer* get_Ordinal();
		static mscorlib::System::StringComparer* get_OrdinalIgnoreCase();
		int32_t Compare(mscorlib::System::Object* x, mscorlib::System::Object* y);
		bool Equals(mscorlib::System::Object* x, mscorlib::System::Object* y);
		int32_t GetHashCode(mscorlib::System::Object* obj);
		int32_t Compare(mscorlib::System::String* x, mscorlib::System::String* y);
		bool Equals(mscorlib::System::String* x, mscorlib::System::String* y);
		int32_t GetHashCode(mscorlib::System::String* obj);
		void _ctor();
		static void _cctor();
	};
}

