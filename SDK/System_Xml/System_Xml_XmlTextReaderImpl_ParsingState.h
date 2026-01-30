#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlTextReaderImpl.h"
namespace System_Xml::System::Xml { struct XmlTextReaderImpl; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Text { struct Encoding; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::Text { struct Decoder; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::IO { struct TextReader; };
namespace mscorlib::System { struct String; };
namespace System::System { struct Uri; };
namespace System_Xml::System::Xml { struct IDtdEntityInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml
{
	struct XmlTextReaderImpl_ParsingState
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<wchar_t>* chars;
		int32_t charPos;
		int32_t charsUsed;
		mscorlib::System::Text::Encoding* encoding;
		bool appendMode;
		mscorlib::System::IO::Stream* stream;
		mscorlib::System::Text::Decoder* decoder;
		IL2CPP::Array<uint8_t>* bytes;
		int32_t bytePos;
		int32_t bytesUsed;
		mscorlib::System::IO::TextReader* textReader;
		int32_t lineNo;
		int32_t lineStartPos;
		mscorlib::System::String* baseUriStr;
		System::System::Uri* baseUri;
		bool isEof;
		bool isStreamEof;
		System_Xml::System::Xml::IDtdEntityInfo* entity;
		int32_t entityId;
		bool eolNormalized;
		bool entityResolvedManually;
		void Clear();
		void Close(bool closeInput);
		int32_t get_LineNo();
		int32_t get_LinePos();
	};
}

