#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "MS_Internal_Xml_XPath_AstNode.h"
#include "MS_Internal_Xml_XPath_Function_FunctionType.h"
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System { struct String; };
#include "System_Xml_XPath_XPathResultType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::MS::Internal::Xml::XPath { struct AstNode; };
#include "MS_Internal_Xml_XPath_AstNode_AstType.h"

namespace System_Xml::MS::Internal::Xml::XPath
{
	struct Function : System_Xml::MS::Internal::Xml::XPath::AstNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::MS::Internal::Xml::XPath::Function_FunctionType functionType;
		mscorlib::System::Collections::ArrayList* argumentList;
		mscorlib::System::String* name;
		mscorlib::System::String* prefix;
		struct StaticFields
		{
			IL2CPP::Array<System_Xml::System::Xml::XPath::XPathResultType>* ReturnTypes;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System_Xml::MS::Internal::Xml::XPath::Function_FunctionType ftype, mscorlib::System::Collections::ArrayList* argumentList);
		void _ctor(mscorlib::System::String* prefix, mscorlib::System::String* name, mscorlib::System::Collections::ArrayList* argumentList);
		void _ctor(System_Xml::MS::Internal::Xml::XPath::Function_FunctionType ftype, System_Xml::MS::Internal::Xml::XPath::AstNode* arg);
		System_Xml::MS::Internal::Xml::XPath::AstNode_AstType get_Type();
		System_Xml::System::Xml::XPath::XPathResultType get_ReturnType();
		static void _cctor();
	};
}

