#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "MS_Internal_Xml_XPath_XPathParser.h"
namespace System_Xml::MS::Internal::Xml::XPath { struct XPathParser; };
#include "MS_Internal_Xml_XPath_Function_FunctionType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Xml_XPath_XPathResultType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::MS::Internal::Xml::XPath
{
	struct XPathParser_ParamInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::MS::Internal::Xml::XPath::Function_FunctionType ftype;
		int32_t minargs;
		int32_t maxargs;
		IL2CPP::Array<System_Xml::System::Xml::XPath::XPathResultType>* argTypes;
		System_Xml::MS::Internal::Xml::XPath::Function_FunctionType get_FType();
		int32_t get_Minargs();
		int32_t get_Maxargs();
		IL2CPP::Array<System_Xml::System::Xml::XPath::XPathResultType>* get_ArgTypes();
		void _ctor(System_Xml::MS::Internal::Xml::XPath::Function_FunctionType ftype, int32_t minargs, int32_t maxargs, IL2CPP::Array<System_Xml::System::Xml::XPath::XPathResultType>* argTypes);
	};
}

