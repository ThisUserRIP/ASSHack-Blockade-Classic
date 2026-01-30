#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Xml_SmallXmlParser.h"
namespace mscorlib::Mono::Xml { struct SmallXmlParser; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::Mono::Xml { struct SmallXmlParser_IAttrList; };

namespace mscorlib::Mono::Xml
{
	struct SmallXmlParser_IContentHandler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void OnStartParsing(mscorlib::Mono::Xml::SmallXmlParser* parser);
		void OnEndParsing(mscorlib::Mono::Xml::SmallXmlParser* parser);
		void OnStartElement(mscorlib::System::String* name, mscorlib::Mono::Xml::SmallXmlParser_IAttrList* attrs);
		void OnEndElement(mscorlib::System::String* name);
		void OnProcessingInstruction(mscorlib::System::String* name, mscorlib::System::String* text);
		void OnChars(mscorlib::System::String* text);
		void OnIgnorableWhitespace(mscorlib::System::String* text);
	};
}

