#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_XmlTextReaderImpl.h"
namespace System_Xml::System::Xml { struct XmlTextReaderImpl; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System { struct Uri; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlResolver; };
namespace System_Xml::System::Xml { struct XmlParserContext; };
namespace mscorlib::System::IO { struct TextReader; };
#include "System_Xml_XmlTextReaderImpl_InitInputType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml
{
	struct XmlTextReaderImpl_LaterInitParam : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool useAsync;
		mscorlib::System::IO::Stream* inputStream;
		IL2CPP::Array<uint8_t>* inputBytes;
		int32_t inputByteCount;
		System::System::Uri* inputbaseUri;
		mscorlib::System::String* inputUriStr;
		System_Xml::System::Xml::XmlResolver* inputUriResolver;
		System_Xml::System::Xml::XmlParserContext* inputContext;
		mscorlib::System::IO::TextReader* inputTextReader;
		System_Xml::System::Xml::XmlTextReaderImpl_InitInputType initType;
		void _ctor();
	};
}

