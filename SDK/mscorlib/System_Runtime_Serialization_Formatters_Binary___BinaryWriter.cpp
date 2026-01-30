#include "System_Runtime_Serialization_Formatters_Binary___BinaryWriter.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "__BinaryWriter");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::_ctor(mscorlib::System::IO::Stream* sout, mscorlib::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, mscorlib::System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.IO.Stream", "System.Runtime.Serialization.Formatters.Binary.ObjectWriter", "System.Runtime.Serialization.Formatters.FormatterTypeStyle" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)sout;
	params[1] = (intptr_t)objectWriter;
	params[2] = (intptr_t)&formatterTypeStyle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteBegin()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteBegin");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteEnd()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteEnd");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteBoolean(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteBoolean", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteByte(uint8_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteByte", std::vector<std::string> { "System.Byte" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteBytes(IL2CPP::Array<uint8_t>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteBytes", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteBytes(IL2CPP::Array<uint8_t>* byteA, int32_t offset, int32_t size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteBytes", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)byteA;
	params[1] = (intptr_t)&offset;
	params[2] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteChar(wchar_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteChar", std::vector<std::string> { "System.Char" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteChars(IL2CPP::Array<wchar_t>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteChars", std::vector<std::string> { "System.Char[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteDecimal(mscorlib::System::Decimal value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteDecimal", std::vector<std::string> { "System.Decimal" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteSingle(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteSingle", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteDouble(double value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteDouble", std::vector<std::string> { "System.Double" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteInt16(int16_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteInt16", std::vector<std::string> { "System.Int16" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteInt32(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteInt32", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteInt64(int64_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteInt64", std::vector<std::string> { "System.Int64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteSByte(int8_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteSByte", std::vector<std::string> { "System.SByte" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteString(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteString", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteTimeSpan(mscorlib::System::TimeSpan value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteTimeSpan", std::vector<std::string> { "System.TimeSpan" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteDateTime(mscorlib::System::DateTime value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteDateTime", std::vector<std::string> { "System.DateTime" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteUInt16(uint16_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteUInt16", std::vector<std::string> { "System.UInt16" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteUInt32(uint32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteUInt32", std::vector<std::string> { "System.UInt32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteUInt64(uint64_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteUInt64", std::vector<std::string> { "System.UInt64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteObjectEnd(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteObjectEnd", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)memberNameInfo;
	params[1] = (intptr_t)typeNameInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteSerializationHeaderEnd()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteSerializationHeaderEnd");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteSerializationHeader(int32_t topId, int32_t headerId, int32_t minorVersion, int32_t majorVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteSerializationHeader", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&topId;
	params[1] = (intptr_t)&headerId;
	params[2] = (intptr_t)&minorVersion;
	params[3] = (intptr_t)&majorVersion;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMethodCall()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteMethodCall");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMethodReturn()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteMethodReturn");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteObject(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, int32_t numMembers, IL2CPP::Array<mscorlib::System::String*>* memberNames, IL2CPP::Array<mscorlib::System::Type*>* memberTypes, IL2CPP::Array<mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>* memberObjectInfos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteObject", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Int32", "System.String[]", "System.Type[]", "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo[]" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)nameInfo;
	params[1] = (intptr_t)typeNameInfo;
	params[2] = (intptr_t)&numMembers;
	params[3] = (intptr_t)memberNames;
	params[4] = (intptr_t)memberTypes;
	params[5] = (intptr_t)memberObjectInfos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteObjectString(int32_t objectId, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteObjectString", std::vector<std::string> { "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&objectId;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteSingleArray(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int32_t length, int32_t lowerBound, mscorlib::System::Array* array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteSingleArray", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Int32", "System.Int32", "System.Array" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)memberNameInfo;
	params[1] = (intptr_t)arrayNameInfo;
	params[2] = (intptr_t)objectInfo;
	params[3] = (intptr_t)arrayElemTypeNameInfo;
	params[4] = (intptr_t)&length;
	params[5] = (intptr_t)&lowerBound;
	params[6] = (intptr_t)array;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteArrayAsBytes(mscorlib::System::Array* array, int32_t typeLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteArrayAsBytes", std::vector<std::string> { "System.Array", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)array;
	params[1] = (intptr_t)&typeLength;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteJaggedArray(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int32_t length, int32_t lowerBound)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteJaggedArray", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)memberNameInfo;
	params[1] = (intptr_t)arrayNameInfo;
	params[2] = (intptr_t)objectInfo;
	params[3] = (intptr_t)arrayElemTypeNameInfo;
	params[4] = (intptr_t)&length;
	params[5] = (intptr_t)&lowerBound;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteRectangleArray(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int32_t rank, IL2CPP::Array<int32_t>* lengthA, IL2CPP::Array<int32_t>* lowerBoundA)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteRectangleArray", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Int32", "System.Int32[]", "System.Int32[]" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)memberNameInfo;
	params[1] = (intptr_t)arrayNameInfo;
	params[2] = (intptr_t)objectInfo;
	params[3] = (intptr_t)arrayElemTypeNameInfo;
	params[4] = (intptr_t)&rank;
	params[5] = (intptr_t)lengthA;
	params[6] = (intptr_t)lowerBoundA;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteObjectByteArray(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int32_t length, int32_t lowerBound, IL2CPP::Array<uint8_t>* byteA)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteObjectByteArray", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Int32", "System.Int32", "System.Byte[]" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)memberNameInfo;
	params[1] = (intptr_t)arrayNameInfo;
	params[2] = (intptr_t)objectInfo;
	params[3] = (intptr_t)arrayElemTypeNameInfo;
	params[4] = (intptr_t)&length;
	params[5] = (intptr_t)&lowerBound;
	params[6] = (intptr_t)byteA;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMember(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteMember", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)memberNameInfo;
	params[1] = (intptr_t)typeNameInfo;
	params[2] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteNullMember(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteNullMember", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)memberNameInfo;
	params[1] = (intptr_t)typeNameInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMemberObjectRef(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, int32_t idRef)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteMemberObjectRef", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)memberNameInfo;
	params[1] = (intptr_t)&idRef;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMemberNested(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteMemberNested", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.NameInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)memberNameInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMemberString(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteMemberString", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)memberNameInfo;
	params[1] = (intptr_t)typeNameInfo;
	params[2] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteItem(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* itemNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteItem", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Object" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)itemNameInfo;
	params[1] = (intptr_t)typeNameInfo;
	params[2] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteNullItem(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* itemNameInfo, mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteNullItem", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Runtime.Serialization.Formatters.Binary.NameInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)itemNameInfo;
	params[1] = (intptr_t)typeNameInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteDelayedNullItem()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteDelayedNullItem");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteItemEnd()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteItemEnd");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::InternalWriteItemNull()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalWriteItemNull");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteItemObjectRef(mscorlib::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, int32_t idRef)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteItemObjectRef", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.NameInfo", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)nameInfo;
	params[1] = (intptr_t)&idRef;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteAssembly(mscorlib::System::Type* type, mscorlib::System::String* assemblyString, int32_t assemId, bool isNew)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteAssembly", std::vector<std::string> { "System.Type", "System.String", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)assemblyString;
	params[2] = (intptr_t)&assemId;
	params[3] = (intptr_t)&isNew;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteValue(mscorlib::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteValue", std::vector<std::string> { "System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&code;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
