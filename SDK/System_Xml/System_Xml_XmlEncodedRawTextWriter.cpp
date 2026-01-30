#include "System_Xml_XmlEncodedRawTextWriter.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XmlEncodedRawTextWriter::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml", "XmlEncodedRawTextWriter");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XmlEncodedRawTextWriter::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::_ctor(System_Xml::System::Xml::XmlWriterSettings* settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlWriterSettings" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)settings;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::_ctor(mscorlib::System::IO::TextWriter* writer, System_Xml::System::Xml::XmlWriterSettings* settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.IO.TextWriter", "System.Xml.XmlWriterSettings" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)writer;
	params[1] = (intptr_t)settings;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::_ctor(mscorlib::System::IO::Stream* stream, System_Xml::System::Xml::XmlWriterSettings* settings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.IO.Stream", "System.Xml.XmlWriterSettings" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)stream;
	params[1] = (intptr_t)settings;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteXmlDeclaration(System_Xml::System::Xml::XmlStandalone standalone)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteXmlDeclaration", std::vector<std::string> { "System.Xml.XmlStandalone" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&standalone;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteXmlDeclaration(mscorlib::System::String* xmldecl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteXmlDeclaration", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)xmldecl;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteDocType(mscorlib::System::String* name, mscorlib::System::String* pubid, mscorlib::System::String* sysid, mscorlib::System::String* subset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteDocType", std::vector<std::string> { "System.String", "System.String", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)pubid;
	params[2] = (intptr_t)sysid;
	params[3] = (intptr_t)subset;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteStartElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteStartElement", std::vector<std::string> { "System.String", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)localName;
	params[2] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::StartElementContent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartElementContent");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteEndElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEndElement", std::vector<std::string> { "System.String", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)localName;
	params[2] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteFullEndElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteFullEndElement", std::vector<std::string> { "System.String", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)localName;
	params[2] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteStartAttribute(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteStartAttribute", std::vector<std::string> { "System.String", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)localName;
	params[2] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteEndAttribute()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEndAttribute");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteNamespaceDeclaration(mscorlib::System::String* prefix, mscorlib::System::String* namespaceName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteNamespaceDeclaration", std::vector<std::string> { "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)namespaceName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::XmlEncodedRawTextWriter::get_SupportsNamespaceDeclarationInChunks()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SupportsNamespaceDeclarationInChunks");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteStartNamespaceDeclaration(mscorlib::System::String* prefix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteStartNamespaceDeclaration", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)prefix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteEndNamespaceDeclaration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEndNamespaceDeclaration");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteCData(mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteCData", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)text;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteComment(mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteComment", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)text;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteProcessingInstruction(mscorlib::System::String* name, mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteProcessingInstruction", std::vector<std::string> { "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)text;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteEntityRef(mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEntityRef", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteCharEntity(wchar_t ch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteCharEntity", std::vector<std::string> { "System.Char" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ch;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteWhitespace(mscorlib::System::String* ws)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteWhitespace", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)ws;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteString(mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteString", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)text;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteSurrogateCharEntity(wchar_t lowChar, wchar_t highChar)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteSurrogateCharEntity", std::vector<std::string> { "System.Char", "System.Char" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&lowChar;
	params[1] = (intptr_t)&highChar;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteChars(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteChars", std::vector<std::string> { "System.Char[]", "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteRaw(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteRaw", std::vector<std::string> { "System.Char[]", "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteRaw(mscorlib::System::String* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteRaw", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::Close()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Close");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::Flush()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Flush");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::FlushBuffer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FlushBuffer");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::EncodeChars(int32_t startOffset, int32_t endOffset, bool writeAllToStream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EncodeChars", std::vector<std::string> { "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&startOffset;
	params[1] = (intptr_t)&endOffset;
	params[2] = (intptr_t)&writeAllToStream;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::FlushEncoder()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FlushEncoder");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteAttributeTextBlock(wchar_t* pSrc, wchar_t* pSrcEnd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteAttributeTextBlock", std::vector<std::string> { "System.Char*", "System.Char*" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)pSrc;
	params[1] = (intptr_t)pSrcEnd;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteElementTextBlock(wchar_t* pSrc, wchar_t* pSrcEnd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteElementTextBlock", std::vector<std::string> { "System.Char*", "System.Char*" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)pSrc;
	params[1] = (intptr_t)pSrcEnd;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::RawText(mscorlib::System::String* s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RawText", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)s;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::RawText(wchar_t* pSrcBegin, wchar_t* pSrcEnd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RawText", std::vector<std::string> { "System.Char*", "System.Char*" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)pSrcBegin;
	params[1] = (intptr_t)pSrcEnd;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteRawWithCharChecking(wchar_t* pSrcBegin, wchar_t* pSrcEnd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteRawWithCharChecking", std::vector<std::string> { "System.Char*", "System.Char*" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)pSrcBegin;
	params[1] = (intptr_t)pSrcEnd;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteCommentOrPi(mscorlib::System::String* text, int32_t stopChar)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteCommentOrPi", std::vector<std::string> { "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)text;
	params[1] = (intptr_t)&stopChar;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteCDataSection(mscorlib::System::String* text)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteCDataSection", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)text;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
wchar_t* System_Xml::System::Xml::XmlEncodedRawTextWriter::EncodeSurrogate(wchar_t* pSrc, wchar_t* pSrcEnd, wchar_t* pDst)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EncodeSurrogate", std::vector<std::string> { "System.Char*", "System.Char*", "System.Char*" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)pSrc;
	params[1] = (intptr_t)pSrcEnd;
	params[2] = (intptr_t)pDst;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (wchar_t*)returnValue;
}
wchar_t* System_Xml::System::Xml::XmlEncodedRawTextWriter::InvalidXmlChar(int32_t ch, wchar_t* pDst, bool entitize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvalidXmlChar", std::vector<std::string> { "System.Int32", "System.Char*", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ch;
	params[1] = (intptr_t)pDst;
	params[2] = (intptr_t)&entitize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (wchar_t*)returnValue;
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::EncodeChar(wchar_t& pSrc, wchar_t* pSrcEnd, wchar_t& pDst)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EncodeChar", std::vector<std::string> { "System.Char*&", "System.Char*", "System.Char*&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&pSrc;
	params[1] = (intptr_t)pSrcEnd;
	params[2] = (intptr_t)&pDst;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::ChangeTextContentMark(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ChangeTextContentMark", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::GrowTextContentMarks()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GrowTextContentMarks");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
wchar_t* System_Xml::System::Xml::XmlEncodedRawTextWriter::WriteNewLine(wchar_t* pDst)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteNewLine", std::vector<std::string> { "System.Char*" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pDst;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (wchar_t*)returnValue;
}
wchar_t* System_Xml::System::Xml::XmlEncodedRawTextWriter::LtEntity(wchar_t* pDst)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LtEntity", std::vector<std::string> { "System.Char*" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pDst;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (wchar_t*)returnValue;
}
wchar_t* System_Xml::System::Xml::XmlEncodedRawTextWriter::GtEntity(wchar_t* pDst)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GtEntity", std::vector<std::string> { "System.Char*" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pDst;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (wchar_t*)returnValue;
}
wchar_t* System_Xml::System::Xml::XmlEncodedRawTextWriter::AmpEntity(wchar_t* pDst)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AmpEntity", std::vector<std::string> { "System.Char*" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pDst;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (wchar_t*)returnValue;
}
wchar_t* System_Xml::System::Xml::XmlEncodedRawTextWriter::QuoteEntity(wchar_t* pDst)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QuoteEntity", std::vector<std::string> { "System.Char*" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pDst;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (wchar_t*)returnValue;
}
wchar_t* System_Xml::System::Xml::XmlEncodedRawTextWriter::TabEntity(wchar_t* pDst)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TabEntity", std::vector<std::string> { "System.Char*" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pDst;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (wchar_t*)returnValue;
}
wchar_t* System_Xml::System::Xml::XmlEncodedRawTextWriter::LineFeedEntity(wchar_t* pDst)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LineFeedEntity", std::vector<std::string> { "System.Char*" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pDst;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (wchar_t*)returnValue;
}
wchar_t* System_Xml::System::Xml::XmlEncodedRawTextWriter::CarriageReturnEntity(wchar_t* pDst)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CarriageReturnEntity", std::vector<std::string> { "System.Char*" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pDst;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (wchar_t*)returnValue;
}
wchar_t* System_Xml::System::Xml::XmlEncodedRawTextWriter::CharEntity(wchar_t* pDst, wchar_t ch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CharEntity", std::vector<std::string> { "System.Char*", "System.Char" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)pDst;
	params[1] = (intptr_t)&ch;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (wchar_t*)returnValue;
}
wchar_t* System_Xml::System::Xml::XmlEncodedRawTextWriter::RawStartCData(wchar_t* pDst)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RawStartCData", std::vector<std::string> { "System.Char*" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pDst;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (wchar_t*)returnValue;
}
wchar_t* System_Xml::System::Xml::XmlEncodedRawTextWriter::RawEndCData(wchar_t* pDst)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RawEndCData", std::vector<std::string> { "System.Char*" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pDst;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (wchar_t*)returnValue;
}
void System_Xml::System::Xml::XmlEncodedRawTextWriter::ValidateContentChars(mscorlib::System::String* chars, mscorlib::System::String* propertyName, bool allowOnlyWhitespace)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValidateContentChars", std::vector<std::string> { "System.String", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)chars;
	params[1] = (intptr_t)propertyName;
	params[2] = (intptr_t)&allowOnlyWhitespace;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
