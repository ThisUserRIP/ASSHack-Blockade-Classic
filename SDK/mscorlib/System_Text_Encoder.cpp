#include "System_Text_Encoder.h"

IL2CPP::Il2CppClass* mscorlib::System::Text::Encoder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Text", "Encoder");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Text::Encoder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Text::Encoder::SerializeEncoder(mscorlib::System::Runtime::Serialization::SerializationInfo* info)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SerializeEncoder", std::vector<std::string> { "System.Runtime.Serialization.SerializationInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)info;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Text::Encoder::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Text::EncoderFallback* mscorlib::System::Text::Encoder::get_Fallback()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Fallback");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::EncoderFallback*)returnValue;
}
mscorlib::System::Text::EncoderFallbackBuffer* mscorlib::System::Text::Encoder::get_FallbackBuffer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_FallbackBuffer");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Text::EncoderFallbackBuffer*)returnValue;
}
bool mscorlib::System::Text::Encoder::get_InternalHasFallbackBuffer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_InternalHasFallbackBuffer");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Text::Encoder::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::Text::Encoder::GetByteCount(IL2CPP::Array<wchar_t>* chars, int32_t index, int32_t count, bool flush)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetByteCount", std::vector<std::string> { "System.Char[]", "System.Int32", "System.Int32", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)chars;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&count;
	params[3] = (intptr_t)&flush;
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
int32_t mscorlib::System::Text::Encoder::GetByteCount(wchar_t* chars, int32_t count, bool flush)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetByteCount", std::vector<std::string> { "System.Char*", "System.Int32", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)chars;
	params[1] = (intptr_t)&count;
	params[2] = (intptr_t)&flush;
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
int32_t mscorlib::System::Text::Encoder::GetBytes(IL2CPP::Array<wchar_t>* chars, int32_t charIndex, int32_t charCount, IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex, bool flush)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBytes", std::vector<std::string> { "System.Char[]", "System.Int32", "System.Int32", "System.Byte[]", "System.Int32", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)chars;
	params[1] = (intptr_t)&charIndex;
	params[2] = (intptr_t)&charCount;
	params[3] = (intptr_t)bytes;
	params[4] = (intptr_t)&byteIndex;
	params[5] = (intptr_t)&flush;
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
int32_t mscorlib::System::Text::Encoder::GetBytes(wchar_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, bool flush)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBytes", std::vector<std::string> { "System.Char*", "System.Int32", "System.Byte*", "System.Int32", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)chars;
	params[1] = (intptr_t)&charCount;
	params[2] = (intptr_t)bytes;
	params[3] = (intptr_t)&byteCount;
	params[4] = (intptr_t)&flush;
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
void mscorlib::System::Text::Encoder::Convert(IL2CPP::Array<wchar_t>* chars, int32_t charIndex, int32_t charCount, IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex, int32_t byteCount, bool flush, int32_t& charsUsed, int32_t& bytesUsed, bool& completed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Convert", std::vector<std::string> { "System.Char[]", "System.Int32", "System.Int32", "System.Byte[]", "System.Int32", "System.Int32", "System.Boolean", "System.Int32&", "System.Int32&", "System.Boolean&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)chars;
	params[1] = (intptr_t)&charIndex;
	params[2] = (intptr_t)&charCount;
	params[3] = (intptr_t)bytes;
	params[4] = (intptr_t)&byteIndex;
	params[5] = (intptr_t)&byteCount;
	params[6] = (intptr_t)&flush;
	params[7] = (intptr_t)&charsUsed;
	params[8] = (intptr_t)&bytesUsed;
	params[9] = (intptr_t)&completed;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Text::Encoder::Convert(wchar_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, bool flush, int32_t& charsUsed, int32_t& bytesUsed, bool& completed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Convert", std::vector<std::string> { "System.Char*", "System.Int32", "System.Byte*", "System.Int32", "System.Boolean", "System.Int32&", "System.Int32&", "System.Boolean&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)chars;
	params[1] = (intptr_t)&charCount;
	params[2] = (intptr_t)bytes;
	params[3] = (intptr_t)&byteCount;
	params[4] = (intptr_t)&flush;
	params[5] = (intptr_t)&charsUsed;
	params[6] = (intptr_t)&bytesUsed;
	params[7] = (intptr_t)&completed;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
