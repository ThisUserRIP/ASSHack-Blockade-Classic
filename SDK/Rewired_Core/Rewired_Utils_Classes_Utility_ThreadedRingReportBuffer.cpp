#include "Rewired_Utils_Classes_Utility_ThreadedRingReportBuffer.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils.Classes.Utility", "ThreadedRingReportBuffer");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::get_IsRunning()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsRunning");
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
int32_t Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::get_BufferLength()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BufferLength");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::get_BytesInBuffer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BytesInBuffer");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::get_EntriesInBuffer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_EntriesInBuffer");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<uint8_t>* Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::get_ReadBuffer()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ReadBuffer");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
int32_t Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::get_LastNumBytesRead()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LastNumBytesRead");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::_ctor(int32_t entryByteLength, int32_t entryCapacity, int32_t threadRefreshRateFPS, int32_t threadAutoKillTimeoutMS, bool threadBlockOnStartAndStop, mscorlib::System::Action_1<IL2CPP::Array<mscorlib::System::Byte>>* threadRetrieveDataDelegate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Boolean", "System.Action`1<System.Byte[]>" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&entryByteLength;
	params[1] = (intptr_t)&entryCapacity;
	params[2] = (intptr_t)&threadRefreshRateFPS;
	params[3] = (intptr_t)&threadAutoKillTimeoutMS;
	params[4] = (intptr_t)&threadBlockOnStartAndStop;
	params[5] = (intptr_t)threadRetrieveDataDelegate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::Read()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Read");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::Read(IL2CPP::Array<uint8_t>* buffer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Read", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)buffer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::Read(intptr_t buffer, int32_t bufferLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Read", std::vector<std::string> { "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&buffer;
	params[1] = (intptr_t)&bufferLength;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::StartRead()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartRead");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::StartThread()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartThread");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::StopThread()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StopThread");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::cllfSxuDRQBfCCgnGGPMjahCwGdC()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "cllfSxuDRQBfCCgnGGPMjahCwGdC");
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
bool Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::gWRRnusCFafKiOTsuNynyjhAxmW()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "gWRRnusCFafKiOTsuNynyjhAxmW");
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
void Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::ftxfepicArhLnsyOXWEtEtXLcNky()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ftxfepicArhLnsyOXWEtEtXLcNky");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::eKhNbdhfFtRehUCGTDMicbTsxJD()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "eKhNbdhfFtRehUCGTDMicbTsxJD");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Utils::Classes::Utility::ThreadedRingReportBuffer::Dispose(bool disposing)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&disposing;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
