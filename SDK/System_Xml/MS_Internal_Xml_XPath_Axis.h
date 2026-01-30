#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "MS_Internal_Xml_XPath_AstNode.h"
#include "MS_Internal_Xml_XPath_Axis_AxisType.h"
namespace System_Xml::MS::Internal::Xml::XPath { struct AstNode; };
namespace mscorlib::System { struct String; };
#include "System_Xml_XPath_XPathNodeType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "MS_Internal_Xml_XPath_AstNode_AstType.h"
#include "System_Xml_XPath_XPathResultType.h"

namespace System_Xml::MS::Internal::Xml::XPath
{
	struct Axis : System_Xml::MS::Internal::Xml::XPath::AstNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::MS::Internal::Xml::XPath::Axis_AxisType axisType;
		System_Xml::MS::Internal::Xml::XPath::AstNode* input;
		mscorlib::System::String* prefix;
		mscorlib::System::String* name;
		System_Xml::System::Xml::XPath::XPathNodeType nodeType;
		bool abbrAxis;
		mscorlib::System::String* urn;
		void _ctor(System_Xml::MS::Internal::Xml::XPath::Axis_AxisType axisType, System_Xml::MS::Internal::Xml::XPath::AstNode* input, mscorlib::System::String* prefix, mscorlib::System::String* name, System_Xml::System::Xml::XPath::XPathNodeType nodetype);
		void _ctor(System_Xml::MS::Internal::Xml::XPath::Axis_AxisType axisType, System_Xml::MS::Internal::Xml::XPath::AstNode* input);
		System_Xml::MS::Internal::Xml::XPath::AstNode_AstType get_Type();
		System_Xml::System::Xml::XPath::XPathResultType get_ReturnType();
		System_Xml::MS::Internal::Xml::XPath::AstNode* get_Input();
		void set_Input(System_Xml::MS::Internal::Xml::XPath::AstNode* value);
		mscorlib::System::String* get_Prefix();
		mscorlib::System::String* get_Name();
		System_Xml::System::Xml::XPath::XPathNodeType get_NodeType();
		System_Xml::MS::Internal::Xml::XPath::Axis_AxisType get_TypeOfAxis();
		bool get_AbbrAxis();
		mscorlib::System::String* get_Urn();
		void set_Urn(mscorlib::System::String* value);
	};
}

