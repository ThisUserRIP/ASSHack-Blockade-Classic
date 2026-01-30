#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "MS_Internal_Xml_XPath_AstNode.h"
namespace System_Xml::MS::Internal::Xml::XPath { struct AstNode; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "MS_Internal_Xml_XPath_AstNode_AstType.h"
#include "System_Xml_XPath_XPathResultType.h"

namespace System_Xml::MS::Internal::Xml::XPath
{
	struct Group : System_Xml::MS::Internal::Xml::XPath::AstNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::MS::Internal::Xml::XPath::AstNode* groupNode;
		void _ctor(System_Xml::MS::Internal::Xml::XPath::AstNode* groupNode);
		System_Xml::MS::Internal::Xml::XPath::AstNode_AstType get_Type();
		System_Xml::System::Xml::XPath::XPathResultType get_ReturnType();
	};
}

