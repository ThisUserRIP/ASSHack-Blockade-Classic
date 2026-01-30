#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "MS_Internal_Xml_XPath_XPathScanner_LexKind.h"
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Xml_XmlCharType.h"
namespace System_Xml::System::Xml { struct XmlCharType; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::MS::Internal::Xml::XPath
{
	struct XPathScanner : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* xpathExpr;
		int32_t xpathExprIndex;
		System_Xml::MS::Internal::Xml::XPath::XPathScanner_LexKind kind;
		wchar_t currentChar;
		mscorlib::System::String* name;
		mscorlib::System::String* prefix;
		mscorlib::System::String* stringValue;
		double numberValue;
		bool canBeFunction;
		System_Xml::System::Xml::XmlCharType xmlCharType;
		void _ctor(mscorlib::System::String* xpathExpr);
		mscorlib::System::String* get_SourceText();
		wchar_t get_CurerntChar();
		bool NextChar();
		System_Xml::MS::Internal::Xml::XPath::XPathScanner_LexKind get_Kind();
		mscorlib::System::String* get_Name();
		mscorlib::System::String* get_Prefix();
		mscorlib::System::String* get_StringValue();
		double get_NumberValue();
		bool get_CanBeFunction();
		void SkipSpace();
		bool NextLex();
		double ScanNumber();
		double ScanFraction();
		mscorlib::System::String* ScanString();
		mscorlib::System::String* ScanName();
	};
}

