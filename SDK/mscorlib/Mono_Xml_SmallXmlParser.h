#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::Mono::Xml { struct SmallXmlParser_IContentHandler; };
namespace mscorlib::System::IO { struct TextReader; };
namespace mscorlib::System::Collections { struct Stack; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::Mono::Xml { struct SmallXmlParser_AttrListImpl; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Exception; };

namespace mscorlib::Mono::Xml
{
	struct SmallXmlParser : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::Mono::Xml::SmallXmlParser_IContentHandler* handler;
		mscorlib::System::IO::TextReader* reader;
		mscorlib::System::Collections::Stack* elementNames;
		mscorlib::System::Collections::Stack* xmlSpaces;
		mscorlib::System::String* xmlSpace;
		mscorlib::System::Text::StringBuilder* buffer;
		IL2CPP::Array<wchar_t>* nameBuffer;
		bool isWhitespace;
		mscorlib::Mono::Xml::SmallXmlParser_AttrListImpl* attributes;
		int32_t line;
		int32_t column;
		bool resetColumn;
		void _ctor();
		mscorlib::System::Exception* Error(mscorlib::System::String* msg);
		mscorlib::System::Exception* UnexpectedEndError();
		bool IsNameChar(wchar_t c, bool start);
		bool IsWhitespace(int32_t c);
		void SkipWhitespaces();
		void HandleWhitespaces();
		void SkipWhitespaces(bool expected);
		int32_t Peek();
		int32_t Read();
		void Expect(int32_t c);
		mscorlib::System::String* ReadUntil(wchar_t until, bool handleReferences);
		mscorlib::System::String* ReadName();
		void Parse(mscorlib::System::IO::TextReader* input, mscorlib::Mono::Xml::SmallXmlParser_IContentHandler* handler);
		void Cleanup();
		void ReadContent();
		void HandleBufferedContent();
		void ReadCharacters();
		void ReadReference();
		int32_t ReadCharacterReference();
		void ReadAttribute(mscorlib::Mono::Xml::SmallXmlParser_AttrListImpl* a);
		void ReadCDATASection();
		void ReadComment();
	};
}

