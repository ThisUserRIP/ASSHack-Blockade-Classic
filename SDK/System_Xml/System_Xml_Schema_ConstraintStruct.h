#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml::Schema { struct CompiledIdentityConstraint; };
namespace System_Xml::System::Xml::Schema { struct SelectorActiveAxis; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System::Collections { struct Hashtable; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct ConstraintStruct : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::CompiledIdentityConstraint* constraint;
		System_Xml::System::Xml::Schema::SelectorActiveAxis* axisSelector;
		mscorlib::System::Collections::ArrayList* axisFields;
		mscorlib::System::Collections::Hashtable* qualifiedTable;
		mscorlib::System::Collections::Hashtable* keyrefTable;
		int32_t tableDim;
		int32_t get_TableDim();
		void _ctor(System_Xml::System::Xml::Schema::CompiledIdentityConstraint* constraint);
	};
}

