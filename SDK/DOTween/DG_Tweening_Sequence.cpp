#include "DG_Tweening_Sequence.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::Sequence::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening", "Sequence");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::Sequence::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void DOTween::DG::Tweening::Sequence::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
DOTween::DG::Tweening::Sequence* DOTween::DG::Tweening::Sequence::DoPrepend(DOTween::DG::Tweening::Sequence* inSequence, DOTween::DG::Tweening::Tween* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoPrepend", std::vector<std::string> { "DG.Tweening.Sequence", "DG.Tweening.Tween" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)inSequence;
	params[1] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Sequence*)returnValue;
}
DOTween::DG::Tweening::Sequence* DOTween::DG::Tweening::Sequence::DoInsert(DOTween::DG::Tweening::Sequence* inSequence, DOTween::DG::Tweening::Tween* t, float atPosition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoInsert", std::vector<std::string> { "DG.Tweening.Sequence", "DG.Tweening.Tween", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)inSequence;
	params[1] = (intptr_t)t;
	params[2] = (intptr_t)&atPosition;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Sequence*)returnValue;
}
DOTween::DG::Tweening::Sequence* DOTween::DG::Tweening::Sequence::DoAppendInterval(DOTween::DG::Tweening::Sequence* inSequence, float interval)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoAppendInterval", std::vector<std::string> { "DG.Tweening.Sequence", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)inSequence;
	params[1] = (intptr_t)&interval;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Sequence*)returnValue;
}
DOTween::DG::Tweening::Sequence* DOTween::DG::Tweening::Sequence::DoPrependInterval(DOTween::DG::Tweening::Sequence* inSequence, float interval)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoPrependInterval", std::vector<std::string> { "DG.Tweening.Sequence", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)inSequence;
	params[1] = (intptr_t)&interval;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Sequence*)returnValue;
}
DOTween::DG::Tweening::Sequence* DOTween::DG::Tweening::Sequence::DoInsertCallback(DOTween::DG::Tweening::Sequence* inSequence, DOTween::DG::Tweening::TweenCallback* callback, float atPosition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoInsertCallback", std::vector<std::string> { "DG.Tweening.Sequence", "DG.Tweening.TweenCallback", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)inSequence;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)&atPosition;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Sequence*)returnValue;
}
void DOTween::DG::Tweening::Sequence::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool DOTween::DG::Tweening::Sequence::Validate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Validate");
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
bool DOTween::DG::Tweening::Sequence::Startup()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Startup");
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
bool DOTween::DG::Tweening::Sequence::ApplyTween(float prevPosition, int32_t prevCompletedLoops, int32_t newCompletedSteps, bool useInversePosition, DOTween::DG::Tweening::Core::Enums::UpdateMode updateMode, DOTween::DG::Tweening::Core::Enums::UpdateNotice updateNotice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ApplyTween", std::vector<std::string> { "System.Single", "System.Int32", "System.Int32", "System.Boolean", "DG.Tweening.Core.Enums.UpdateMode", "DG.Tweening.Core.Enums.UpdateNotice" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&prevPosition;
	params[1] = (intptr_t)&prevCompletedLoops;
	params[2] = (intptr_t)&newCompletedSteps;
	params[3] = (intptr_t)&useInversePosition;
	params[4] = (intptr_t)&updateMode;
	params[5] = (intptr_t)&updateNotice;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
void DOTween::DG::Tweening::Sequence::Setup(DOTween::DG::Tweening::Sequence* s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Setup", std::vector<std::string> { "DG.Tweening.Sequence" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)s;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool DOTween::DG::Tweening::Sequence::DoStartup(DOTween::DG::Tweening::Sequence* s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoStartup", std::vector<std::string> { "DG.Tweening.Sequence" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)s;
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
bool DOTween::DG::Tweening::Sequence::DoApplyTween(DOTween::DG::Tweening::Sequence* s, float prevPosition, int32_t prevCompletedLoops, int32_t newCompletedSteps, bool useInversePosition, DOTween::DG::Tweening::Core::Enums::UpdateMode updateMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoApplyTween", std::vector<std::string> { "DG.Tweening.Sequence", "System.Single", "System.Int32", "System.Int32", "System.Boolean", "DG.Tweening.Core.Enums.UpdateMode" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&prevPosition;
	params[2] = (intptr_t)&prevCompletedLoops;
	params[3] = (intptr_t)&newCompletedSteps;
	params[4] = (intptr_t)&useInversePosition;
	params[5] = (intptr_t)&updateMode;
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
bool DOTween::DG::Tweening::Sequence::ApplyInternalCycle(DOTween::DG::Tweening::Sequence* s, float fromPos, float toPos, DOTween::DG::Tweening::Core::Enums::UpdateMode updateMode, bool useInverse, bool prevPosIsInverse, bool multiCycleStep)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ApplyInternalCycle", std::vector<std::string> { "DG.Tweening.Sequence", "System.Single", "System.Single", "DG.Tweening.Core.Enums.UpdateMode", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)s;
	params[1] = (intptr_t)&fromPos;
	params[2] = (intptr_t)&toPos;
	params[3] = (intptr_t)&updateMode;
	params[4] = (intptr_t)&useInverse;
	params[5] = (intptr_t)&prevPosIsInverse;
	params[6] = (intptr_t)&multiCycleStep;
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
void DOTween::DG::Tweening::Sequence::StableSortSequencedObjs(mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Core::ABSSequentiable>* list)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StableSortSequencedObjs", std::vector<std::string> { "System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)list;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool DOTween::DG::Tweening::Sequence::IsAnyCallbackSet(DOTween::DG::Tweening::Sequence* s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsAnyCallbackSet", std::vector<std::string> { "DG.Tweening.Sequence" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)s;
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
