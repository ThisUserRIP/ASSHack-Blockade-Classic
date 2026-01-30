#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlRawWriter.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::Text { struct Encoding; };
#include "System_Xml_XmlCharType.h"
namespace System_Xml::System::Xml { struct XmlCharType; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System::Text { struct Encoder; };
namespace mscorlib::System::IO { struct TextWriter; };
namespace System_Xml::System::Xml { struct CharEntityEncoderFallback; };
#include "System_Xml_NewLineHandling.h"
namespace mscorlib::System { struct String; };
#include "System_Xml_XmlStandalone.h"
#include "System_Xml_XmlOutputMethod.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlWriterSettings; };

namespace System_Xml::System::Xml
{
	struct XmlEncodedRawTextWriter : System_Xml::System::Xml::XmlRawWriter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool useAsync;
		IL2CPP::Array<uint8_t>* bufBytes;
		mscorlib::System::IO::Stream* stream;
		mscorlib::System::Text::Encoding* encoding;
		System_Xml::System::Xml::XmlCharType xmlCharType;
		int32_t bufPos;
		int32_t textPos;
		int32_t contentPos;
		int32_t cdataPos;
		int32_t attrEndPos;
		int32_t bufLen;
		bool writeToNull;
		bool hadDoubleBracket;
		bool inAttributeValue;
		int32_t bufBytesUsed;
		IL2CPP::Array<wchar_t>* bufChars;
		mscorlib::System::Text::Encoder* encoder;
		mscorlib::System::IO::TextWriter* writer;
		bool trackTextContent;
		bool inTextContent;
		int32_t lastMarkPos;
		IL2CPP::Array<int32_t>* textContentMarks;
		System_Xml::System::Xml::CharEntityEncoderFallback* charEntityFallback;
		System_Xml::System::Xml::NewLineHandling newLineHandling;
		bool closeOutput;
		bool omitXmlDeclaration;
		mscorlib::System::String* newLineChars;
		bool checkCharacters;
		System_Xml::System::Xml::XmlStandalone standalone;
		System_Xml::System::Xml::XmlOutputMethod outputMethod;
		bool autoXmlDeclaration;
		bool mergeCDataSections;
		void _ctor(System_Xml::System::Xml::XmlWriterSettings* settings);
		void _ctor(mscorlib::System::IO::TextWriter* writer, System_Xml::System::Xml::XmlWriterSettings* settings);
		void _ctor(mscorlib::System::IO::Stream* stream, System_Xml::System::Xml::XmlWriterSettings* settings);
		void WriteXmlDeclaration(System_Xml::System::Xml::XmlStandalone standalone);
		void WriteXmlDeclaration(mscorlib::System::String* xmldecl);
		void WriteDocType(mscorlib::System::String* name, mscorlib::System::String* pubid, mscorlib::System::String* sysid, mscorlib::System::String* subset);
		void WriteStartElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void StartElementContent();
		void WriteEndElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteFullEndElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteStartAttribute(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns);
		void WriteEndAttribute();
		void WriteNamespaceDeclaration(mscorlib::System::String* prefix, mscorlib::System::String* namespaceName);
		bool get_SupportsNamespaceDeclarationInChunks();
		void WriteStartNamespaceDeclaration(mscorlib::System::String* prefix);
		void WriteEndNamespaceDeclaration();
		void WriteCData(mscorlib::System::String* text);
		void WriteComment(mscorlib::System::String* text);
		void WriteProcessingInstruction(mscorlib::System::String* name, mscorlib::System::String* text);
		void WriteEntityRef(mscorlib::System::String* name);
		void WriteCharEntity(wchar_t ch);
		void WriteWhitespace(mscorlib::System::String* ws);
		void WriteString(mscorlib::System::String* text);
		void WriteSurrogateCharEntity(wchar_t lowChar, wchar_t highChar);
		void WriteChars(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void WriteRaw(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void WriteRaw(mscorlib::System::String* data);
		void Close();
		void Flush();
		void FlushBuffer();
		void EncodeChars(int32_t startOffset, int32_t endOffset, bool writeAllToStream);
		void FlushEncoder();
		void WriteAttributeTextBlock(wchar_t* pSrc, wchar_t* pSrcEnd);
		void WriteElementTextBlock(wchar_t* pSrc, wchar_t* pSrcEnd);
		void RawText(mscorlib::System::String* s);
		void RawText(wchar_t* pSrcBegin, wchar_t* pSrcEnd);
		void WriteRawWithCharChecking(wchar_t* pSrcBegin, wchar_t* pSrcEnd);
		void WriteCommentOrPi(mscorlib::System::String* text, int32_t stopChar);
		void WriteCDataSection(mscorlib::System::String* text);
		static wchar_t* EncodeSurrogate(wchar_t* pSrc, wchar_t* pSrcEnd, wchar_t* pDst);
		wchar_t* InvalidXmlChar(int32_t ch, wchar_t* pDst, bool entitize);
		void EncodeChar(wchar_t& pSrc, wchar_t* pSrcEnd, wchar_t& pDst);
		void ChangeTextContentMark(bool value);
		void GrowTextContentMarks();
		wchar_t* WriteNewLine(wchar_t* pDst);
		static wchar_t* LtEntity(wchar_t* pDst);
		static wchar_t* GtEntity(wchar_t* pDst);
		static wchar_t* AmpEntity(wchar_t* pDst);
		static wchar_t* QuoteEntity(wchar_t* pDst);
		static wchar_t* TabEntity(wchar_t* pDst);
		static wchar_t* LineFeedEntity(wchar_t* pDst);
		static wchar_t* CarriageReturnEntity(wchar_t* pDst);
		static wchar_t* CharEntity(wchar_t* pDst, wchar_t ch);
		static wchar_t* RawStartCData(wchar_t* pDst);
		static wchar_t* RawEndCData(wchar_t* pDst);
		void ValidateContentChars(mscorlib::System::String* chars, mscorlib::System::String* propertyName, bool allowOnlyWhitespace);
	};
}

