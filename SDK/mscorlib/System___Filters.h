#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Reflection { struct MemberInfo; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct __Filters : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::__Filters* Instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool FilterAttribute(mscorlib::System::Reflection::MemberInfo* m, mscorlib::System::Object* filterCriteria);
		bool FilterName(mscorlib::System::Reflection::MemberInfo* m, mscorlib::System::Object* filterCriteria);
		bool FilterIgnoreCase(mscorlib::System::Reflection::MemberInfo* m, mscorlib::System::Object* filterCriteria);
		void _ctor();
		static void _cctor();
	};
}

