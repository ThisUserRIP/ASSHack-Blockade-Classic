#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Xml_SmallXmlParser.h"
namespace mscorlib::System::Security { struct SecurityElement; };
namespace mscorlib::System::Collections { struct Stack; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::Mono::Xml { struct SmallXmlParser; };
namespace mscorlib::Mono::Xml { struct SmallXmlParser_IAttrList; };

namespace mscorlib::Mono::Xml
{
	struct SecurityParser : mscorlib::Mono::Xml::SmallXmlParser
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::SecurityElement* root;
		mscorlib::System::Security::SecurityElement* current;
		mscorlib::System::Collections::Stack* stack;
		void _ctor();
		void LoadXml(mscorlib::System::String* xml);
		mscorlib::System::Security::SecurityElement* ToXml();
		void OnStartParsing(mscorlib::Mono::Xml::SmallXmlParser* parser);
		void OnProcessingInstruction(mscorlib::System::String* name, mscorlib::System::String* text);
		void OnIgnorableWhitespace(mscorlib::System::String* s);
		void OnStartElement(mscorlib::System::String* name, mscorlib::Mono::Xml::SmallXmlParser_IAttrList* attrs);
		void OnEndElement(mscorlib::System::String* name);
		void OnChars(mscorlib::System::String* ch);
		void OnEndParsing(mscorlib::Mono::Xml::SmallXmlParser* parser);
	};
}

