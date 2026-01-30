#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "MS_Internal_Xml_XPath_AstNode_AstType.h"
#include "System_Xml_XPath_XPathResultType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::MS::Internal::Xml::XPath
{
	struct AstNode : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::MS::Internal::Xml::XPath::AstNode_AstType get_Type();
		System_Xml::System::Xml::XPath::XPathResultType get_ReturnType();
		void _ctor();
	};
}

