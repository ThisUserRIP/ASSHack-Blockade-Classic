#include "DG_Tweening_Core_TweenManager.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::Core::TweenManager::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening.Core", "TweenManager");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::Core::TweenManager::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void DOTween::DG::Tweening::Core::TweenManager::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
DOTween::DG::Tweening::Sequence* DOTween::DG::Tweening::Core::TweenManager::GetSequence()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSequence");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Sequence*)returnValue;
}
void DOTween::DG::Tweening::Core::TweenManager::SetUpdateType(DOTween::DG::Tweening::Tween* t, DOTween::DG::Tweening::UpdateType updateType, bool isIndependentUpdate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetUpdateType", std::vector<std::string> { "DG.Tweening.Tween", "DG.Tweening.UpdateType", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&updateType;
	params[2] = (intptr_t)&isIndependentUpdate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Core::TweenManager::AddActiveTweenToSequence(DOTween::DG::Tweening::Tween* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddActiveTweenToSequence", std::vector<std::string> { "DG.Tweening.Tween" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t DOTween::DG::Tweening::Core::TweenManager::DespawnAll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DespawnAll");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void DOTween::DG::Tweening::Core::TweenManager::Despawn(DOTween::DG::Tweening::Tween* t, bool modifyActiveLists)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Despawn", std::vector<std::string> { "DG.Tweening.Tween", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&modifyActiveLists;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Core::TweenManager::PurgeAll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PurgeAll");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Core::TweenManager::PurgePools()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PurgePools");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Core::TweenManager::AddTweenLink(DOTween::DG::Tweening::Tween* t, DOTween::DG::Tweening::Core::TweenLink* tweenLink)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddTweenLink", std::vector<std::string> { "DG.Tweening.Tween", "DG.Tweening.Core.TweenLink" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)tweenLink;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Core::TweenManager::RemoveTweenLink(DOTween::DG::Tweening::Tween* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveTweenLink", std::vector<std::string> { "DG.Tweening.Tween" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Core::TweenManager::ResetCapacities()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ResetCapacities");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Core::TweenManager::SetCapacities(int32_t tweenersCapacity, int32_t sequencesCapacity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetCapacities", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&tweenersCapacity;
	params[1] = (intptr_t)&sequencesCapacity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t DOTween::DG::Tweening::Core::TweenManager::Validate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Validate");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void DOTween::DG::Tweening::Core::TweenManager::Update(DOTween::DG::Tweening::UpdateType updateType, float deltaTime, float independentTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update", std::vector<std::string> { "DG.Tweening.UpdateType", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&updateType;
	params[1] = (intptr_t)&deltaTime;
	params[2] = (intptr_t)&independentTime;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t DOTween::DG::Tweening::Core::TweenManager::FilteredOperation(DOTween::DG::Tweening::Core::Enums::OperationType operationType, DOTween::DG::Tweening::Core::Enums::FilterType filterType, mscorlib::System::Object* id, bool optionalBool, float optionalFloat, mscorlib::System::Object* optionalObj, IL2CPP::Array<mscorlib::System::Object*>* optionalArray)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FilteredOperation", std::vector<std::string> { "DG.Tweening.Core.Enums.OperationType", "DG.Tweening.Core.Enums.FilterType", "System.Object", "System.Boolean", "System.Single", "System.Object", "System.Object[]" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&operationType;
	params[1] = (intptr_t)&filterType;
	params[2] = (intptr_t)id;
	params[3] = (intptr_t)&optionalBool;
	params[4] = (intptr_t)&optionalFloat;
	params[5] = (intptr_t)optionalObj;
	params[6] = (intptr_t)optionalArray;
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
bool DOTween::DG::Tweening::Core::TweenManager::Complete(DOTween::DG::Tweening::Tween* t, bool modifyActiveLists, DOTween::DG::Tweening::Core::Enums::UpdateMode updateMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Complete", std::vector<std::string> { "DG.Tweening.Tween", "System.Boolean", "DG.Tweening.Core.Enums.UpdateMode" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&modifyActiveLists;
	params[2] = (intptr_t)&updateMode;
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
bool DOTween::DG::Tweening::Core::TweenManager::Flip(DOTween::DG::Tweening::Tween* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Flip", std::vector<std::string> { "DG.Tweening.Tween" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
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
void DOTween::DG::Tweening::Core::TweenManager::ForceInit(DOTween::DG::Tweening::Tween* t, bool isSequenced)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ForceInit", std::vector<std::string> { "DG.Tweening.Tween", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&isSequenced;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool DOTween::DG::Tweening::Core::TweenManager::Goto(DOTween::DG::Tweening::Tween* t, float to, bool andPlay, DOTween::DG::Tweening::Core::Enums::UpdateMode updateMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Goto", std::vector<std::string> { "DG.Tweening.Tween", "System.Single", "System.Boolean", "DG.Tweening.Core.Enums.UpdateMode" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&to;
	params[2] = (intptr_t)&andPlay;
	params[3] = (intptr_t)&updateMode;
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
bool DOTween::DG::Tweening::Core::TweenManager::Pause(DOTween::DG::Tweening::Tween* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Pause", std::vector<std::string> { "DG.Tweening.Tween" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
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
bool DOTween::DG::Tweening::Core::TweenManager::Play(DOTween::DG::Tweening::Tween* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Play", std::vector<std::string> { "DG.Tweening.Tween" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
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
bool DOTween::DG::Tweening::Core::TweenManager::PlayBackwards(DOTween::DG::Tweening::Tween* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlayBackwards", std::vector<std::string> { "DG.Tweening.Tween" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
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
bool DOTween::DG::Tweening::Core::TweenManager::PlayForward(DOTween::DG::Tweening::Tween* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlayForward", std::vector<std::string> { "DG.Tweening.Tween" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
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
bool DOTween::DG::Tweening::Core::TweenManager::Restart(DOTween::DG::Tweening::Tween* t, bool includeDelay, float changeDelayTo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Restart", std::vector<std::string> { "DG.Tweening.Tween", "System.Boolean", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&includeDelay;
	params[2] = (intptr_t)&changeDelayTo;
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
bool DOTween::DG::Tweening::Core::TweenManager::Rewind(DOTween::DG::Tweening::Tween* t, bool includeDelay)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewind", std::vector<std::string> { "DG.Tweening.Tween", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&includeDelay;
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
bool DOTween::DG::Tweening::Core::TweenManager::SmoothRewind(DOTween::DG::Tweening::Tween* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SmoothRewind", std::vector<std::string> { "DG.Tweening.Tween" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
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
bool DOTween::DG::Tweening::Core::TweenManager::TogglePause(DOTween::DG::Tweening::Tween* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TogglePause", std::vector<std::string> { "DG.Tweening.Tween" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
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
int32_t DOTween::DG::Tweening::Core::TweenManager::TotalPooledTweens()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TotalPooledTweens");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t DOTween::DG::Tweening::Core::TweenManager::TotalPlayingTweens()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TotalPlayingTweens");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* DOTween::DG::Tweening::Core::TweenManager::GetActiveTweens(bool playing, mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* fillableList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetActiveTweens", std::vector<std::string> { "System.Boolean", "System.Collections.Generic.List`1<DG.Tweening.Tween>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&playing;
	params[1] = (intptr_t)fillableList;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* DOTween::DG::Tweening::Core::TweenManager::GetTweensById(mscorlib::System::Object* id, bool playingOnly, mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* fillableList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTweensById", std::vector<std::string> { "System.Object", "System.Boolean", "System.Collections.Generic.List`1<DG.Tweening.Tween>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)id;
	params[1] = (intptr_t)&playingOnly;
	params[2] = (intptr_t)fillableList;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* DOTween::DG::Tweening::Core::TweenManager::GetTweensByTarget(mscorlib::System::Object* target, bool playingOnly, mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* fillableList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTweensByTarget", std::vector<std::string> { "System.Object", "System.Boolean", "System.Collections.Generic.List`1<DG.Tweening.Tween>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)&playingOnly;
	params[2] = (intptr_t)fillableList;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>*)returnValue;
}
void DOTween::DG::Tweening::Core::TweenManager::MarkForKilling(DOTween::DG::Tweening::Tween* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MarkForKilling", std::vector<std::string> { "DG.Tweening.Tween" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Core::TweenManager::EvaluateTweenLink(DOTween::DG::Tweening::Tween* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EvaluateTweenLink", std::vector<std::string> { "DG.Tweening.Tween" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Core::TweenManager::AddActiveTween(DOTween::DG::Tweening::Tween* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddActiveTween", std::vector<std::string> { "DG.Tweening.Tween" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Core::TweenManager::ReorganizeActiveTweens()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReorganizeActiveTweens");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Core::TweenManager::DespawnActiveTweens(mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* tweens)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DespawnActiveTweens", std::vector<std::string> { "System.Collections.Generic.List`1<DG.Tweening.Tween>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)tweens;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Core::TweenManager::RemoveActiveTween(DOTween::DG::Tweening::Tween* t)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveActiveTween", std::vector<std::string> { "DG.Tweening.Tween" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)t;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Core::TweenManager::ClearTweenArray(IL2CPP::Array<DOTween::DG::Tweening::Tween*>* tweens)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearTweenArray", std::vector<std::string> { "DG.Tweening.Tween[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)tweens;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Core::TweenManager::IncreaseCapacities(DOTween::DG::Tweening::Core::TweenManager_CapacityIncreaseMode increaseMode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IncreaseCapacities", std::vector<std::string> { "DG.Tweening.Core.TweenManager/CapacityIncreaseMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&increaseMode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::Core::TweenManager::ManageOnRewindCallbackWhenAlreadyRewinded(DOTween::DG::Tweening::Tween* t, bool isPlayBackwardsOrSmoothRewind)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ManageOnRewindCallbackWhenAlreadyRewinded", std::vector<std::string> { "DG.Tweening.Tween", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)t;
	params[1] = (intptr_t)&isPlayBackwardsOrSmoothRewind;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
