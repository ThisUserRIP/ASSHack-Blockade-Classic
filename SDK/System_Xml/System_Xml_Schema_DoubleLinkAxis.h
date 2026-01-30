#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "MS_Internal_Xml_XPath_Axis.h"
namespace System_Xml::MS::Internal::Xml::XPath { struct Axis; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct DoubleLinkAxis : System_Xml::MS::Internal::Xml::XPath::Axis
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::MS::Internal::Xml::XPath::Axis* next;
		System_Xml::MS::Internal::Xml::XPath::Axis* get_Next();
		void set_Next(System_Xml::MS::Internal::Xml::XPath::Axis* value);
		void _ctor(System_Xml::MS::Internal::Xml::XPath::Axis* axis, System_Xml::System::Xml::Schema::DoubleLinkAxis* inputaxis);
		static System_Xml::System::Xml::Schema::DoubleLinkAxis* ConvertTree(System_Xml::MS::Internal::Xml::XPath::Axis* axis);
	};
}

