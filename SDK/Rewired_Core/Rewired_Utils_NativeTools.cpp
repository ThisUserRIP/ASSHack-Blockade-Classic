#include "Rewired_Utils_NativeTools.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::NativeTools::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils", "NativeTools");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::NativeTools::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
intptr_t Rewired_Core::Rewired::Utils::NativeTools::OffsetIntPtr(intptr_t intPtr, int32_t offset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OffsetIntPtr", std::vector<std::string> { "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&intPtr;
	params[1] = (intptr_t)&offset;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::Utils::NativeTools::CopyMemory(intptr_t source, intptr_t destination, int32_t sourceStartIndex, int32_t destinationStartIndex, int32_t bytesToCopy, bool throwOnError)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyMemory", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.Int32", "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&source;
	params[1] = (intptr_t)&destination;
	params[2] = (intptr_t)&sourceStartIndex;
	params[3] = (intptr_t)&destinationStartIndex;
	params[4] = (intptr_t)&bytesToCopy;
	params[5] = (intptr_t)&throwOnError;
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
bool Rewired_Core::Rewired::Utils::NativeTools::CopyMemory(IL2CPP::Array<uint8_t>* source, intptr_t destination, int32_t sourceStartIndex, int32_t destinationStartIndex, int32_t bytesToCopy, bool throwOnError)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyMemory", std::vector<std::string> { "System.Byte[]", "System.IntPtr", "System.Int32", "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)&destination;
	params[2] = (intptr_t)&sourceStartIndex;
	params[3] = (intptr_t)&destinationStartIndex;
	params[4] = (intptr_t)&bytesToCopy;
	params[5] = (intptr_t)&throwOnError;
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
bool Rewired_Core::Rewired::Utils::NativeTools::CopyMemory(intptr_t source, IL2CPP::Array<uint8_t>* destination, int32_t sourceStartIndex, int32_t destinationStartIndex, int32_t bytesToCopy, bool throwOnError)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyMemory", std::vector<std::string> { "System.IntPtr", "System.Byte[]", "System.Int32", "System.Int32", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&source;
	params[1] = (intptr_t)destination;
	params[2] = (intptr_t)&sourceStartIndex;
	params[3] = (intptr_t)&destinationStartIndex;
	params[4] = (intptr_t)&bytesToCopy;
	params[5] = (intptr_t)&throwOnError;
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
bool Rewired_Core::Rewired::Utils::NativeTools::FillMemory(intptr_t buffer, int32_t length, uint8_t value, bool throwOnError)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FillMemory", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Byte", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&buffer;
	params[1] = (intptr_t)&length;
	params[2] = (intptr_t)&value;
	params[3] = (intptr_t)&throwOnError;
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
bool Rewired_Core::Rewired::Utils::NativeTools::FillMemory(intptr_t buffer, int32_t startIndex, int32_t length, uint8_t value, bool throwOnError)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FillMemory", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32", "System.Byte", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&buffer;
	params[1] = (intptr_t)&startIndex;
	params[2] = (intptr_t)&length;
	params[3] = (intptr_t)&value;
	params[4] = (intptr_t)&throwOnError;
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
bool Rewired_Core::Rewired::Utils::NativeTools::FillMemory(IL2CPP::Array<uint8_t>* buffer, int32_t length, uint8_t value, bool throwOnError)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FillMemory", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Byte", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&length;
	params[2] = (intptr_t)&value;
	params[3] = (intptr_t)&throwOnError;
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
bool Rewired_Core::Rewired::Utils::NativeTools::FillMemory(IL2CPP::Array<uint8_t>* buffer, int32_t startIndex, int32_t length, uint8_t value, bool throwOnError)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FillMemory", std::vector<std::string> { "System.Byte[]", "System.Int32", "System.Int32", "System.Byte", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)buffer;
	params[1] = (intptr_t)&startIndex;
	params[2] = (intptr_t)&length;
	params[3] = (intptr_t)&value;
	params[4] = (intptr_t)&throwOnError;
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
void Rewired_Core::Rewired::Utils::NativeTools::ZeroFillMemory(intptr_t buffer, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ZeroFillMemory", std::vector<std::string> { "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&buffer;
	params[1] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Core::Rewired::Utils::NativeTools::DumpToString(intptr_t buffer, int32_t length, mscorlib::System::String* stringFormat)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DumpToString", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&buffer;
	params[1] = (intptr_t)&length;
	params[2] = (intptr_t)stringFormat;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Rewired_Core::Rewired::Utils::NativeTools::FreeHGlobalSafe(intptr_t& pointer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FreeHGlobalSafe", std::vector<std::string> { "System.IntPtr&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pointer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
