#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "MS_Internal_Xml_XPath_AstNode.h"
#include "MS_Internal_Xml_XPath_Operator_Op.h"
namespace System_Xml::MS::Internal::Xml::XPath { struct AstNode; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "MS_Internal_Xml_XPath_AstNode_AstType.h"
#include "System_Xml_XPath_XPathResultType.h"

namespace System_Xml::MS::Internal::Xml::XPath
{
	struct Operator : System_Xml::MS::Internal::Xml::XPath::AstNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::MS::Internal::Xml::XPath::Operator_Op opType;
		System_Xml::MS::Internal::Xml::XPath::AstNode* opnd1;
		System_Xml::MS::Internal::Xml::XPath::AstNode* opnd2;
		struct StaticFields
		{
			IL2CPP::Array<System_Xml::MS::Internal::Xml::XPath::Operator_Op>* invertOp;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System_Xml::MS::Internal::Xml::XPath::Operator_Op op, System_Xml::MS::Internal::Xml::XPath::AstNode* opnd1, System_Xml::MS::Internal::Xml::XPath::AstNode* opnd2);
		System_Xml::MS::Internal::Xml::XPath::AstNode_AstType get_Type();
		System_Xml::System::Xml::XPath::XPathResultType get_ReturnType();
		static void _cctor();
	};
}

