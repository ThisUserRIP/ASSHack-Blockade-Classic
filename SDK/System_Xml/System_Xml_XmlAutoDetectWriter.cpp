#include "System_Xml_XmlAutoDetectWriter.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::XmlAutoDetectWriter::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml", "XmlAutoDetectWriter");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::XmlAutoDetectWriter::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Xml::System::Xml::XmlAutoDetectWriter::_ctor(System_Xml::System::Xml::XmlWriterSettings* writerSettings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Xml.XmlWriterSettings" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)writerSettings;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlAutoDetectWriter::_ctor(mscorlib::System::IO::TextWriter* textWriter, System_Xml::System::Xml::XmlWriterSettings* writerSettings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.IO.TextWriter", "System.Xml.XmlWriterSettings" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)textWriter;
	params[1] = (intptr_t)writerSettings;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlAutoDetectWriter::_ctor(mscorlib::System::IO::Stream* strm, System_Xml::System::Xml::XmlWriterSettings* writerSettings)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.IO.Stream", "System.Xml.XmlWriterSettings" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)strm;
	params[1] = (intptr_t)writerSettings;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteDocType(mscorlib::System::String* name, mscorlib::System::String* pubid, mscorlib::System::String* sysid, mscorlib::System::String* subset)
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
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteStartElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns)
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
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteStartAttribute(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns)
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
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteEndAttribute()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEndAttribute");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteCData(mscorlib::System::String* text)
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
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteComment(mscorlib::System::String* text)
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
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteProcessingInstruction(mscorlib::System::String* name, mscorlib::System::String* text)
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
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteWhitespace(mscorlib::System::String* ws)
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
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteString(mscorlib::System::String* text)
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
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteChars(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count)
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
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteRaw(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count)
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
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteRaw(mscorlib::System::String* data)
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
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteEntityRef(mscorlib::System::String* name)
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
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteCharEntity(wchar_t ch)
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
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteSurrogateCharEntity(wchar_t lowChar, wchar_t highChar)
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
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteBase64(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteBase64", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32" });
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
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteBinHex(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteBinHex", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32" });
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
void System_Xml::System::Xml::XmlAutoDetectWriter::Close()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Close");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlAutoDetectWriter::Flush()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Flush");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteValue(mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteValue", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteValue(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteValue", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteValue(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteValue", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteValue(mscorlib::System::DateTime value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteValue", std::vector<std::string> { "System.DateTime" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteValue(double value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteValue", std::vector<std::string> { "System.Double" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteValue(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteValue", std::vector<std::string> { "System.Single" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteValue(mscorlib::System::Decimal value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteValue", std::vector<std::string> { "System.Decimal" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteValue(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteValue", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteValue(int64_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteValue", std::vector<std::string> { "System.Int64" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlAutoDetectWriter::set_NamespaceResolver(System_Xml::System::Xml::IXmlNamespaceResolver* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_NamespaceResolver", std::vector<std::string> { "System.Xml.IXmlNamespaceResolver" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteXmlDeclaration(System_Xml::System::Xml::XmlStandalone standalone)
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
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteXmlDeclaration(mscorlib::System::String* xmldecl)
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
void System_Xml::System::Xml::XmlAutoDetectWriter::StartElementContent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartElementContent");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteEndElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns)
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
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteFullEndElement(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns)
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
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteNamespaceDeclaration(mscorlib::System::String* prefix, mscorlib::System::String* ns)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteNamespaceDeclaration", std::vector<std::string> { "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)prefix;
	params[1] = (intptr_t)ns;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::XmlAutoDetectWriter::get_SupportsNamespaceDeclarationInChunks()
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
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteStartNamespaceDeclaration(mscorlib::System::String* prefix)
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
void System_Xml::System::Xml::XmlAutoDetectWriter::WriteEndNamespaceDeclaration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEndNamespaceDeclaration");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::XmlAutoDetectWriter::IsHtmlTag(mscorlib::System::String* tagName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsHtmlTag", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)tagName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::XmlAutoDetectWriter::EnsureWrappedWriter(System_Xml::System::Xml::XmlOutputMethod outMethod)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EnsureWrappedWriter", std::vector<std::string> { "System.Xml.XmlOutputMethod" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&outMethod;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool System_Xml::System::Xml::XmlAutoDetectWriter::TextBlockCreatesWriter(mscorlib::System::String* textBlock)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TextBlockCreatesWriter", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)textBlock;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void System_Xml::System::Xml::XmlAutoDetectWriter::CreateWrappedWriter(System_Xml::System::Xml::XmlOutputMethod outMethod)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateWrappedWriter", std::vector<std::string> { "System.Xml.XmlOutputMethod" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&outMethod;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
