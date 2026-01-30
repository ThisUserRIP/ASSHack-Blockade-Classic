#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml::Schema { struct DoubleLinkAxis; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct ForwardAxis : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::DoubleLinkAxis* topNode;
		System_Xml::System::Xml::Schema::DoubleLinkAxis* rootNode;
		bool isAttribute;
		bool isDss;
		bool isSelfAxis;
		System_Xml::System::Xml::Schema::DoubleLinkAxis* get_RootNode();
		System_Xml::System::Xml::Schema::DoubleLinkAxis* get_TopNode();
		bool get_IsAttribute();
		bool get_IsDss();
		bool get_IsSelfAxis();
		void _ctor(System_Xml::System::Xml::Schema::DoubleLinkAxis* axis, bool isdesorself);
	};
}

