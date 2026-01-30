#include "System_Buffer.h"

IL2CPP::Il2CppClass* mscorlib::System::Buffer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "Buffer");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Buffer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool mscorlib::System::Buffer::InternalBlockCopy(mscorlib::System::Array* src, int32_t srcOffsetBytes, mscorlib::System::Array* dst, int32_t dstOffsetBytes, int32_t byteCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalBlockCopy", std::vector<std::string> { "System.Array", "System.Int32", "System.Array", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)src;
	params[1] = (intptr_t)&srcOffsetBytes;
	params[2] = (intptr_t)dst;
	params[3] = (intptr_t)&dstOffsetBytes;
	params[4] = (intptr_t)&byteCount;
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
int32_t mscorlib::System::Buffer::IndexOfByte(uint8_t* src, uint8_t value, int32_t index, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IndexOfByte", std::vector<std::string> { "System.Byte*", "System.Byte", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)src;
	params[1] = (intptr_t)&value;
	params[2] = (intptr_t)&index;
	params[3] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t mscorlib::System::Buffer::_ByteLength(mscorlib::System::Array* array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "_ByteLength", std::vector<std::string> { "System.Array" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)array;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void mscorlib::System::Buffer::ZeroMemory_(uint8_t* src, int64_t len)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ZeroMemory", std::vector<std::string> { "System.Byte*", "System.Int64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)src;
	params[1] = (intptr_t)&len;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Buffer::Memcpy(IL2CPP::Array<uint8_t>* dest, int32_t destIndex, uint8_t* src, int32_t srcIndex, int32_t len)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Memcpy", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Byte*", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)dest;
	params[1] = (intptr_t)&destIndex;
	params[2] = (intptr_t)src;
	params[3] = (intptr_t)&srcIndex;
	params[4] = (intptr_t)&len;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Buffer::Memcpy(uint8_t* pDest, int32_t destIndex, IL2CPP::Array<uint8_t>* src, int32_t srcIndex, int32_t len)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Memcpy", std::vector<std::string> { "System.Byte*", "System.Int32", "System.Byte[]", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)pDest;
	params[1] = (intptr_t)&destIndex;
	params[2] = (intptr_t)src;
	params[3] = (intptr_t)&srcIndex;
	params[4] = (intptr_t)&len;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::Buffer::ByteLength(mscorlib::System::Array* array)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ByteLength", std::vector<std::string> { "System.Array" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)array;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void mscorlib::System::Buffer::BlockCopy(mscorlib::System::Array* src, int32_t srcOffset, mscorlib::System::Array* dst, int32_t dstOffset, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BlockCopy", std::vector<std::string> { "System.Array", "System.Int32", "System.Array", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)src;
	params[1] = (intptr_t)&srcOffset;
	params[2] = (intptr_t)dst;
	params[3] = (intptr_t)&dstOffset;
	params[4] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Buffer::memcpy4(uint8_t* dest, uint8_t* src, int32_t size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "memcpy4", std::vector<std::string> { "System.Byte*", "System.Byte*", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)dest;
	params[1] = (intptr_t)src;
	params[2] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Buffer::memcpy2(uint8_t* dest, uint8_t* src, int32_t size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "memcpy2", std::vector<std::string> { "System.Byte*", "System.Byte*", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)dest;
	params[1] = (intptr_t)src;
	params[2] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Buffer::memcpy1(uint8_t* dest, uint8_t* src, int32_t size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "memcpy1", std::vector<std::string> { "System.Byte*", "System.Byte*", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)dest;
	params[1] = (intptr_t)src;
	params[2] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Buffer::Memcpy(uint8_t* dest, uint8_t* src, int32_t size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Memcpy", std::vector<std::string> { "System.Byte*", "System.Byte*", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)dest;
	params[1] = (intptr_t)src;
	params[2] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
