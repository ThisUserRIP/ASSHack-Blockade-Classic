#include "System_Xml_BinHexDecoder.h"

IL2CPP::Il2CppClass* System_Xml::System::Xml::BinHexDecoder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Xml.dll", "System.Xml", "BinHexDecoder");
	return il2cppclass;
}
mscorlib::System::Type* System_Xml::System::Xml::BinHexDecoder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool System_Xml::System::Xml::BinHexDecoder::get_IsFull()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsFull");
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
int32_t System_Xml::System::Xml::BinHexDecoder::Decode(IL2CPP::Array<wchar_t>* chars, int32_t startPos, int32_t len)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Decode", std::vector<std::string> { "System.Char[]", "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)chars;
	params[1] = (intptr_t)&startPos;
	params[2] = (intptr_t)&len;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<uint8_t>* System_Xml::System::Xml::BinHexDecoder::Decode(IL2CPP::Array<wchar_t>* chars, bool allowOddChars)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Decode", std::vector<std::string> { "System.Char[]", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)chars;
	params[1] = (intptr_t)&allowOddChars;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void System_Xml::System::Xml::BinHexDecoder::Decode(wchar_t* pChars, wchar_t* pCharsEndPos, uint8_t* pBytes, uint8_t* pBytesEndPos, bool& hasHalfByteCached, uint8_t& cachedHalfByte, int32_t& charsDecoded, int32_t& bytesDecoded)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Decode", std::vector<std::string> { "System.Char*", "System.Char*", "System.Byte*", "System.Byte*", "System.Boolean&", "System.Byte&", "System.Int32&", "System.Int32&" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)pChars;
	params[1] = (intptr_t)pCharsEndPos;
	params[2] = (intptr_t)pBytes;
	params[3] = (intptr_t)pBytesEndPos;
	params[4] = (intptr_t)&hasHalfByteCached;
	params[5] = (intptr_t)&cachedHalfByte;
	params[6] = (intptr_t)&charsDecoded;
	params[7] = (intptr_t)&bytesDecoded;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
