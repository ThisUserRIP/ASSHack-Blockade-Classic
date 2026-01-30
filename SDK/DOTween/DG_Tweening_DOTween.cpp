#include "DG_Tweening_DOTween.h"

IL2CPP::Il2CppClass* DOTween::DG::Tweening::DOTween::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DOTween.dll", "DG.Tweening", "DOTween");
	return il2cppclass;
}
mscorlib::System::Type* DOTween::DG::Tweening::DOTween::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
DOTween::DG::Tweening::LogBehaviour DOTween::DG::Tweening::DOTween::get_logBehaviour()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_logBehaviour");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		DOTween::DG::Tweening::LogBehaviour ret;
		std::memset(&ret, 0, sizeof(DOTween::DG::Tweening::LogBehaviour));
		return ret;
	}
	return static_cast<DOTween::DG::Tweening::LogBehaviour>(*(DOTween::DG::Tweening::LogBehaviour*)il2cpp_object_unbox(returnValue));
}
void DOTween::DG::Tweening::DOTween::set_logBehaviour(DOTween::DG::Tweening::LogBehaviour value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_logBehaviour", std::vector<std::string> { "DG.Tweening.LogBehaviour" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool DOTween::DG::Tweening::DOTween::get_debugStoreTargetId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_debugStoreTargetId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void DOTween::DG::Tweening::DOTween::set_debugStoreTargetId(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_debugStoreTargetId", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
DOTween::DG::Tweening::IDOTweenInit* DOTween::DG::Tweening::DOTween::Init(mscorlib::System::Nullable_1<mscorlib::System::Boolean> recycleAllByDefault, mscorlib::System::Nullable_1<mscorlib::System::Boolean> useSafeMode, mscorlib::System::Nullable_1<DOTween::DG::Tweening::LogBehaviour> logBehaviour)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "System.Nullable`1<System.Boolean>", "System.Nullable`1<System.Boolean>", "System.Nullable`1<DG.Tweening.LogBehaviour>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&recycleAllByDefault;
	params[1] = (intptr_t)&useSafeMode;
	params[2] = (intptr_t)&logBehaviour;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::IDOTweenInit*)returnValue;
}
void DOTween::DG::Tweening::DOTween::AutoInit()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AutoInit");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
DOTween::DG::Tweening::IDOTweenInit* DOTween::DG::Tweening::DOTween::Init(DOTween::DG::Tweening::Core::DOTweenSettings* settings, mscorlib::System::Nullable_1<mscorlib::System::Boolean> recycleAllByDefault, mscorlib::System::Nullable_1<mscorlib::System::Boolean> useSafeMode, mscorlib::System::Nullable_1<DOTween::DG::Tweening::LogBehaviour> logBehaviour)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "DG.Tweening.Core.DOTweenSettings", "System.Nullable`1<System.Boolean>", "System.Nullable`1<System.Boolean>", "System.Nullable`1<DG.Tweening.LogBehaviour>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)settings;
	params[1] = (intptr_t)&recycleAllByDefault;
	params[2] = (intptr_t)&useSafeMode;
	params[3] = (intptr_t)&logBehaviour;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::IDOTweenInit*)returnValue;
}
void DOTween::DG::Tweening::DOTween::SetTweensCapacity(int32_t tweenersCapacity, int32_t sequencesCapacity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetTweensCapacity", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&tweenersCapacity;
	params[1] = (intptr_t)&sequencesCapacity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::DOTween::Clear(bool destroy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&destroy;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::DOTween::ClearCachedTweens()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearCachedTweens");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
int32_t DOTween::DG::Tweening::DOTween::Validate()
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
void DOTween::DG::Tweening::DOTween::ManualUpdate(float deltaTime, float unscaledDeltaTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ManualUpdate", std::vector<std::string> { "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&deltaTime;
	params[1] = (intptr_t)&unscaledDeltaTime;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOTween::DG::Tweening::DOTween::To(DOTween::DG::Tweening::Core::DOGetter_1<mscorlib::System::Single>* getter, DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::Single>* setter, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "To", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<System.Single>", "DG.Tweening.Core.DOSetter`1<System.Single>", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)&endValue;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Double, mscorlib::System::Double, DOTween::DG::Tweening::Plugins::Options::NoOptions>* DOTween::DG::Tweening::DOTween::To(DOTween::DG::Tweening::Core::DOGetter_1<mscorlib::System::Double>* getter, DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::Double>* setter, double endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "To", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<System.Double>", "DG.Tweening.Core.DOSetter`1<System.Double>", "System.Double", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)&endValue;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Double, mscorlib::System::Double, DOTween::DG::Tweening::Plugins::Options::NoOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Int32, mscorlib::System::Int32, DOTween::DG::Tweening::Plugins::Options::NoOptions>* DOTween::DG::Tweening::DOTween::To(DOTween::DG::Tweening::Core::DOGetter_1<mscorlib::System::Int32>* getter, DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::Int32>* setter, int32_t endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "To", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<System.Int32>", "DG.Tweening.Core.DOSetter`1<System.Int32>", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)&endValue;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Int32, mscorlib::System::Int32, DOTween::DG::Tweening::Plugins::Options::NoOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::UInt32, mscorlib::System::UInt32, DOTween::DG::Tweening::Plugins::Options::UintOptions>* DOTween::DG::Tweening::DOTween::To(DOTween::DG::Tweening::Core::DOGetter_1<mscorlib::System::UInt32>* getter, DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::UInt32>* setter, uint32_t endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "To", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<System.UInt32>", "DG.Tweening.Core.DOSetter`1<System.UInt32>", "System.UInt32", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)&endValue;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::UInt32, mscorlib::System::UInt32, DOTween::DG::Tweening::Plugins::Options::UintOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Int64, mscorlib::System::Int64, DOTween::DG::Tweening::Plugins::Options::NoOptions>* DOTween::DG::Tweening::DOTween::To(DOTween::DG::Tweening::Core::DOGetter_1<mscorlib::System::Int64>* getter, DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::Int64>* setter, int64_t endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "To", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<System.Int64>", "DG.Tweening.Core.DOSetter`1<System.Int64>", "System.Int64", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)&endValue;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Int64, mscorlib::System::Int64, DOTween::DG::Tweening::Plugins::Options::NoOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::UInt64, mscorlib::System::UInt64, DOTween::DG::Tweening::Plugins::Options::NoOptions>* DOTween::DG::Tweening::DOTween::To(DOTween::DG::Tweening::Core::DOGetter_1<mscorlib::System::UInt64>* getter, DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::UInt64>* setter, uint64_t endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "To", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<System.UInt64>", "DG.Tweening.Core.DOSetter`1<System.UInt64>", "System.UInt64", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)&endValue;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::UInt64, mscorlib::System::UInt64, DOTween::DG::Tweening::Plugins::Options::NoOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::String, mscorlib::System::String, DOTween::DG::Tweening::Plugins::Options::StringOptions>* DOTween::DG::Tweening::DOTween::To(DOTween::DG::Tweening::Core::DOGetter_1<mscorlib::System::String>* getter, DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::String>* setter, mscorlib::System::String* endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "To", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<System.String>", "DG.Tweening.Core.DOSetter`1<System.String>", "System.String", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)endValue;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::String, mscorlib::System::String, DOTween::DG::Tweening::Plugins::Options::StringOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::DOTween::To(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector2>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector2>* setter, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "To", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>", "DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>", "UnityEngine.Vector2", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)&endValue;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::DOTween::To(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* setter, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "To", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>", "DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>", "UnityEngine.Vector3", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)&endValue;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::DOTween::To(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector4>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector4>* setter, UnityEngine_CoreModule::UnityEngine::Vector4 endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "To", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<UnityEngine.Vector4>", "DG.Tweening.Core.DOSetter`1<UnityEngine.Vector4>", "UnityEngine.Vector4", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)&endValue;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::QuaternionOptions>* DOTween::DG::Tweening::DOTween::To(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Quaternion>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Quaternion>* setter, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "To", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>", "DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>", "UnityEngine.Vector3", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)&endValue;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::QuaternionOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOTween::DG::Tweening::DOTween::To(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Color>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Color>* setter, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "To", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<UnityEngine.Color>", "DG.Tweening.Core.DOSetter`1<UnityEngine.Color>", "UnityEngine.Color", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)&endValue;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Rect, UnityEngine_CoreModule::UnityEngine::Rect, DOTween::DG::Tweening::Plugins::Options::RectOptions>* DOTween::DG::Tweening::DOTween::To(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Rect>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Rect>* setter, UnityEngine_CoreModule::UnityEngine::Rect endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "To", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<UnityEngine.Rect>", "DG.Tweening.Core.DOSetter`1<UnityEngine.Rect>", "UnityEngine.Rect", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)&endValue;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Rect, UnityEngine_CoreModule::UnityEngine::Rect, DOTween::DG::Tweening::Plugins::Options::RectOptions>*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::DOTween::To(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::RectOffset>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::RectOffset>* setter, UnityEngine_CoreModule::UnityEngine::RectOffset* endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "To", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<UnityEngine.RectOffset>", "DG.Tweening.Core.DOSetter`1<UnityEngine.RectOffset>", "UnityEngine.RectOffset", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)endValue;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTween::DG::Tweening::DOTween::ToAxis(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* setter, float endValue, float duration, DOTween::DG::Tweening::AxisConstraint axisConstraint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToAxis", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>", "DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>", "System.Single", "System.Single", "DG.Tweening.AxisConstraint" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)&endValue;
	params[3] = (intptr_t)&duration;
	params[4] = (intptr_t)&axisConstraint;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOTween::DG::Tweening::DOTween::ToAlpha(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Color>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Color>* setter, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToAlpha", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<UnityEngine.Color>", "DG.Tweening.Core.DOSetter`1<UnityEngine.Color>", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)&endValue;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>*)returnValue;
}
DOTween::DG::Tweening::Tweener* DOTween::DG::Tweening::DOTween::To(DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::Single>* setter, float startValue, float endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "To", std::vector<std::string> { "DG.Tweening.Core.DOSetter`1<System.Single>", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)setter;
	params[1] = (intptr_t)&startValue;
	params[2] = (intptr_t)&endValue;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Tweener*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* DOTween::DG::Tweening::DOTween::Punch(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* setter, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float duration, int32_t vibrato, float elasticity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Punch", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>", "DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>", "UnityEngine.Vector3", "System.Single", "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)&direction;
	params[3] = (intptr_t)&duration;
	params[4] = (intptr_t)&vibrato;
	params[5] = (intptr_t)&elasticity;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* DOTween::DG::Tweening::DOTween::Shake(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* setter, float duration, float strength, int32_t vibrato, float randomness, bool ignoreZAxis, bool fadeOut)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Shake", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>", "DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>", "System.Single", "System.Single", "System.Int32", "System.Single", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&strength;
	params[4] = (intptr_t)&vibrato;
	params[5] = (intptr_t)&randomness;
	params[6] = (intptr_t)&ignoreZAxis;
	params[7] = (intptr_t)&fadeOut;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* DOTween::DG::Tweening::DOTween::Shake(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* setter, float duration, UnityEngine_CoreModule::UnityEngine::Vector3 strength, int32_t vibrato, float randomness, bool fadeOut)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Shake", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>", "DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>", "System.Single", "UnityEngine.Vector3", "System.Int32", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&strength;
	params[4] = (intptr_t)&vibrato;
	params[5] = (intptr_t)&randomness;
	params[6] = (intptr_t)&fadeOut;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* DOTween::DG::Tweening::DOTween::Shake(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* setter, float duration, UnityEngine_CoreModule::UnityEngine::Vector3 strength, int32_t vibrato, float randomness, bool ignoreZAxis, bool vectorBased, bool fadeOut)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Shake", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>", "DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>", "System.Single", "UnityEngine.Vector3", "System.Int32", "System.Single", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)&duration;
	params[3] = (intptr_t)&strength;
	params[4] = (intptr_t)&vibrato;
	params[5] = (intptr_t)&randomness;
	params[6] = (intptr_t)&ignoreZAxis;
	params[7] = (intptr_t)&vectorBased;
	params[8] = (intptr_t)&fadeOut;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* DOTween::DG::Tweening::DOTween::ToArray(DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* setter, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* endValues, IL2CPP::Array<float>* durations)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToArray", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>", "DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>", "UnityEngine.Vector3[]", "System.Single[]" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)endValues;
	params[3] = (intptr_t)durations;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>*)returnValue;
}
DOTween::DG::Tweening::Core::TweenerCore_3<DOTween::DG::Tweening::Color2, DOTween::DG::Tweening::Color2, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOTween::DG::Tweening::DOTween::To(DOTween::DG::Tweening::Core::DOGetter_1<DOTween::DG::Tweening::Color2>* getter, DOTween::DG::Tweening::Core::DOSetter_1<DOTween::DG::Tweening::Color2>* setter, DOTween::DG::Tweening::Color2 endValue, float duration)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "To", std::vector<std::string> { "DG.Tweening.Core.DOGetter`1<DG.Tweening.Color2>", "DG.Tweening.Core.DOSetter`1<DG.Tweening.Color2>", "DG.Tweening.Color2", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)getter;
	params[1] = (intptr_t)setter;
	params[2] = (intptr_t)&endValue;
	params[3] = (intptr_t)&duration;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Core::TweenerCore_3<DOTween::DG::Tweening::Color2, DOTween::DG::Tweening::Color2, DOTween::DG::Tweening::Plugins::Options::ColorOptions>*)returnValue;
}
DOTween::DG::Tweening::Sequence* DOTween::DG::Tweening::DOTween::Sequence()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Sequence");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (DOTween::DG::Tweening::Sequence*)returnValue;
}
int32_t DOTween::DG::Tweening::DOTween::CompleteAll(bool withCallbacks)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompleteAll", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&withCallbacks;
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
int32_t DOTween::DG::Tweening::DOTween::Complete(mscorlib::System::Object* targetOrId, bool withCallbacks)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Complete", std::vector<std::string> { "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)targetOrId;
	params[1] = (intptr_t)&withCallbacks;
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
int32_t DOTween::DG::Tweening::DOTween::CompleteAndReturnKilledTot()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompleteAndReturnKilledTot");
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
int32_t DOTween::DG::Tweening::DOTween::CompleteAndReturnKilledTot(mscorlib::System::Object* targetOrId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompleteAndReturnKilledTot", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)targetOrId;
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
int32_t DOTween::DG::Tweening::DOTween::CompleteAndReturnKilledTotExceptFor(IL2CPP::Array<mscorlib::System::Object*>* excludeTargetsOrIds)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CompleteAndReturnKilledTotExceptFor", std::vector<std::string> { "System.Object[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)excludeTargetsOrIds;
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
int32_t DOTween::DG::Tweening::DOTween::FlipAll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FlipAll");
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
int32_t DOTween::DG::Tweening::DOTween::Flip(mscorlib::System::Object* targetOrId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Flip", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)targetOrId;
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
int32_t DOTween::DG::Tweening::DOTween::GotoAll(float to, bool andPlay)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GotoAll", std::vector<std::string> { "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&to;
	params[1] = (intptr_t)&andPlay;
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
int32_t DOTween::DG::Tweening::DOTween::Goto(mscorlib::System::Object* targetOrId, float to, bool andPlay)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Goto", std::vector<std::string> { "System.Object", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)targetOrId;
	params[1] = (intptr_t)&to;
	params[2] = (intptr_t)&andPlay;
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
int32_t DOTween::DG::Tweening::DOTween::KillAll(bool complete)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KillAll", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&complete;
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
int32_t DOTween::DG::Tweening::DOTween::KillAll(bool complete, IL2CPP::Array<mscorlib::System::Object*>* idsOrTargetsToExclude)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KillAll", std::vector<std::string> { "System.Boolean", "System.Object[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&complete;
	params[1] = (intptr_t)idsOrTargetsToExclude;
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
int32_t DOTween::DG::Tweening::DOTween::Kill(mscorlib::System::Object* targetOrId, bool complete)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Kill", std::vector<std::string> { "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)targetOrId;
	params[1] = (intptr_t)&complete;
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
int32_t DOTween::DG::Tweening::DOTween::PauseAll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PauseAll");
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
int32_t DOTween::DG::Tweening::DOTween::Pause(mscorlib::System::Object* targetOrId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Pause", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)targetOrId;
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
int32_t DOTween::DG::Tweening::DOTween::PlayAll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlayAll");
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
int32_t DOTween::DG::Tweening::DOTween::Play(mscorlib::System::Object* targetOrId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Play", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)targetOrId;
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
int32_t DOTween::DG::Tweening::DOTween::Play(mscorlib::System::Object* target, mscorlib::System::Object* id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Play", std::vector<std::string> { "System.Object", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)id;
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
int32_t DOTween::DG::Tweening::DOTween::PlayBackwardsAll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlayBackwardsAll");
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
int32_t DOTween::DG::Tweening::DOTween::PlayBackwards(mscorlib::System::Object* targetOrId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlayBackwards", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)targetOrId;
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
int32_t DOTween::DG::Tweening::DOTween::PlayBackwards(mscorlib::System::Object* target, mscorlib::System::Object* id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlayBackwards", std::vector<std::string> { "System.Object", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)id;
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
int32_t DOTween::DG::Tweening::DOTween::PlayForwardAll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlayForwardAll");
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
int32_t DOTween::DG::Tweening::DOTween::PlayForward(mscorlib::System::Object* targetOrId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlayForward", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)targetOrId;
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
int32_t DOTween::DG::Tweening::DOTween::PlayForward(mscorlib::System::Object* target, mscorlib::System::Object* id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlayForward", std::vector<std::string> { "System.Object", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)id;
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
int32_t DOTween::DG::Tweening::DOTween::RestartAll(bool includeDelay)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RestartAll", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&includeDelay;
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
int32_t DOTween::DG::Tweening::DOTween::Restart(mscorlib::System::Object* targetOrId, bool includeDelay, float changeDelayTo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Restart", std::vector<std::string> { "System.Object", "System.Boolean", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)targetOrId;
	params[1] = (intptr_t)&includeDelay;
	params[2] = (intptr_t)&changeDelayTo;
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
int32_t DOTween::DG::Tweening::DOTween::Restart(mscorlib::System::Object* target, mscorlib::System::Object* id, bool includeDelay, float changeDelayTo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Restart", std::vector<std::string> { "System.Object", "System.Object", "System.Boolean", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)target;
	params[1] = (intptr_t)id;
	params[2] = (intptr_t)&includeDelay;
	params[3] = (intptr_t)&changeDelayTo;
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
int32_t DOTween::DG::Tweening::DOTween::RewindAll(bool includeDelay)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RewindAll", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&includeDelay;
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
int32_t DOTween::DG::Tweening::DOTween::Rewind(mscorlib::System::Object* targetOrId, bool includeDelay)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewind", std::vector<std::string> { "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)targetOrId;
	params[1] = (intptr_t)&includeDelay;
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
int32_t DOTween::DG::Tweening::DOTween::SmoothRewindAll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SmoothRewindAll");
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
int32_t DOTween::DG::Tweening::DOTween::SmoothRewind(mscorlib::System::Object* targetOrId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SmoothRewind", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)targetOrId;
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
int32_t DOTween::DG::Tweening::DOTween::TogglePauseAll()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TogglePauseAll");
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
int32_t DOTween::DG::Tweening::DOTween::TogglePause(mscorlib::System::Object* targetOrId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TogglePause", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)targetOrId;
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
bool DOTween::DG::Tweening::DOTween::IsTweening(mscorlib::System::Object* targetOrId, bool alsoCheckIfIsPlaying)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsTweening", std::vector<std::string> { "System.Object", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)targetOrId;
	params[1] = (intptr_t)&alsoCheckIfIsPlaying;
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
int32_t DOTween::DG::Tweening::DOTween::TotalPlayingTweens()
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
mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* DOTween::DG::Tweening::DOTween::PlayingTweens(mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* fillableList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlayingTweens", std::vector<std::string> { "System.Collections.Generic.List`1<DG.Tweening.Tween>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)fillableList;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* DOTween::DG::Tweening::DOTween::PausedTweens(mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* fillableList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PausedTweens", std::vector<std::string> { "System.Collections.Generic.List`1<DG.Tweening.Tween>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)fillableList;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* DOTween::DG::Tweening::DOTween::TweensById(mscorlib::System::Object* id, bool playingOnly, mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* fillableList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TweensById", std::vector<std::string> { "System.Object", "System.Boolean", "System.Collections.Generic.List`1<DG.Tweening.Tween>" });
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
mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* DOTween::DG::Tweening::DOTween::TweensByTarget(mscorlib::System::Object* target, bool playingOnly, mscorlib::System::Collections::Generic::List_1<DOTween::DG::Tweening::Tween>* fillableList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TweensByTarget", std::vector<std::string> { "System.Object", "System.Boolean", "System.Collections.Generic.List`1<DG.Tweening.Tween>" });
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
void DOTween::DG::Tweening::DOTween::InitCheck()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitCheck");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::DOTween::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void DOTween::DG::Tweening::DOTween::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
