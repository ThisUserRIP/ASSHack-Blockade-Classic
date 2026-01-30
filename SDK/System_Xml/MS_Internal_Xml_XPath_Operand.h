#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "MS_Internal_Xml_XPath_AstNode.h"
#include "System_Xml_XPath_XPathResultType.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "MS_Internal_Xml_XPath_AstNode_AstType.h"

namespace System_Xml::MS::Internal::Xml::XPath
{
	struct Operand : System_Xml::MS::Internal::Xml::XPath::AstNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XPath::XPathResultType type;
		mscorlib::System::Object* val;
		void _ctor(mscorlib::System::String* val);
		void _ctor(double val);
		System_Xml::MS::Internal::Xml::XPath::AstNode_AstType get_Type();
		System_Xml::System::Xml::XPath::XPathResultType get_ReturnType();
	};
}

