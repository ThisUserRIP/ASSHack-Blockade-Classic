#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::ComponentModel
{
	struct LookupBindingPropertiesAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* dataSource;
		mscorlib::System::String* displayMember;
		mscorlib::System::String* valueMember;
		mscorlib::System::String* lookupMember;
		struct StaticFields
		{
			System::ComponentModel::LookupBindingPropertiesAttribute* Default;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(mscorlib::System::String* dataSource, mscorlib::System::String* displayMember, mscorlib::System::String* valueMember, mscorlib::System::String* lookupMember);
		mscorlib::System::String* get_DataSource();
		mscorlib::System::String* get_DisplayMember();
		mscorlib::System::String* get_ValueMember();
		mscorlib::System::String* get_LookupMember();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		static void _cctor();
	};
}

