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
#include "System_Xml_NewLineHandling.h"
namespace mscorlib::System { struct String; };
#include "System_Xml_XmlStandalone.h"
#include "System_Xml_XmlOutputMethod.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlWriterSettings; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };

namespace System_Xml::System::Xml
{
	struct XmlUtf8RawTextWriter : System_Xml::System::Xml::XmlRawWriter
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
		void FlushEncoder();
		void WriteAttributeTextBlock(wchar_t* pSrc, wchar_t* pSrcEnd);
		void WriteElementTextBlock(wchar_t* pSrc, wchar_t* pSrcEnd);
		void RawText(mscorlib::System::String* s);
		void RawText(wchar_t* pSrcBegin, wchar_t* pSrcEnd);
		void WriteRawWithCharChecking(wchar_t* pSrcBegin, wchar_t* pSrcEnd);
		void WriteCommentOrPi(mscorlib::System::String* text, int32_t stopChar);
		void WriteCDataSection(mscorlib::System::String* text);
		static bool IsSurrogateByte(uint8_t b);
		static uint8_t* EncodeSurrogate(wchar_t* pSrc, wchar_t* pSrcEnd, uint8_t* pDst);
		uint8_t* InvalidXmlChar(int32_t ch, uint8_t* pDst, bool entitize);
		void EncodeChar(wchar_t& pSrc, wchar_t* pSrcEnd, uint8_t& pDst);
		static uint8_t* EncodeMultibyteUTF8(int32_t ch, uint8_t* pDst);
		static void CharToUTF8(wchar_t& pSrc, wchar_t* pSrcEnd, uint8_t& pDst);
		uint8_t* WriteNewLine(uint8_t* pDst);
		static uint8_t* LtEntity(uint8_t* pDst);
		static uint8_t* GtEntity(uint8_t* pDst);
		static uint8_t* AmpEntity(uint8_t* pDst);
		static uint8_t* QuoteEntity(uint8_t* pDst);
		static uint8_t* TabEntity(uint8_t* pDst);
		static uint8_t* LineFeedEntity(uint8_t* pDst);
		static uint8_t* CarriageReturnEntity(uint8_t* pDst);
		static uint8_t* CharEntity(uint8_t* pDst, wchar_t ch);
		static uint8_t* RawStartCData(uint8_t* pDst);
		static uint8_t* RawEndCData(uint8_t* pDst);
		void ValidateContentChars(mscorlib::System::String* chars, mscorlib::System::String* propertyName, bool allowOnlyWhitespace);
	};
}

