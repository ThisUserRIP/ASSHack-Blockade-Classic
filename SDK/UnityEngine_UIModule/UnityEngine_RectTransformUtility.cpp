#include "UnityEngine_RectTransformUtility.h"

IL2CPP::Il2CppClass* UnityEngine_UIModule::UnityEngine::RectTransformUtility::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UIModule.dll", "UnityEngine", "RectTransformUtility");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UIModule::UnityEngine::RectTransformUtility::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_UIModule::UnityEngine::RectTransformUtility::PixelAdjustPoint(UnityEngine_CoreModule::UnityEngine::Vector2 point, UnityEngine_CoreModule::UnityEngine::Transform* elementTransform, UnityEngine_UIModule::UnityEngine::Canvas* canvas)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PixelAdjustPoint", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Transform", "UnityEngine.Canvas" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&point;
	params[1] = (intptr_t)elementTransform;
	params[2] = (intptr_t)canvas;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_UIModule::UnityEngine::RectTransformUtility::PixelAdjustRect(UnityEngine_CoreModule::UnityEngine::RectTransform* rectTransform, UnityEngine_UIModule::UnityEngine::Canvas* canvas)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PixelAdjustRect", std::vector<std::string> { "UnityEngine.RectTransform", "UnityEngine.Canvas" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rectTransform;
	params[1] = (intptr_t)canvas;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_UIModule::UnityEngine::RectTransformUtility::PointInRectangle(UnityEngine_CoreModule::UnityEngine::Vector2 screenPoint, UnityEngine_CoreModule::UnityEngine::RectTransform* rect, UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Vector4 offset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PointInRectangle", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.RectTransform", "UnityEngine.Camera", "UnityEngine.Vector4" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&screenPoint;
	params[1] = (intptr_t)rect;
	params[2] = (intptr_t)cam;
	params[3] = (intptr_t)&offset;
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
bool UnityEngine_UIModule::UnityEngine::RectTransformUtility::RectangleContainsScreenPoint(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, UnityEngine_CoreModule::UnityEngine::Vector2 screenPoint, UnityEngine_CoreModule::UnityEngine::Camera* cam)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RectangleContainsScreenPoint", std::vector<std::string> { "UnityEngine.RectTransform", "UnityEngine.Vector2", "UnityEngine.Camera" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)rect;
	params[1] = (intptr_t)&screenPoint;
	params[2] = (intptr_t)cam;
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
bool UnityEngine_UIModule::UnityEngine::RectTransformUtility::RectangleContainsScreenPoint(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, UnityEngine_CoreModule::UnityEngine::Vector2 screenPoint, UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Vector4 offset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RectangleContainsScreenPoint", std::vector<std::string> { "UnityEngine.RectTransform", "UnityEngine.Vector2", "UnityEngine.Camera", "UnityEngine.Vector4" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)rect;
	params[1] = (intptr_t)&screenPoint;
	params[2] = (intptr_t)cam;
	params[3] = (intptr_t)&offset;
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
bool UnityEngine_UIModule::UnityEngine::RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, UnityEngine_CoreModule::UnityEngine::Vector2 screenPoint, UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Vector3& worldPoint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScreenPointToWorldPointInRectangle", std::vector<std::string> { "UnityEngine.RectTransform", "UnityEngine.Vector2", "UnityEngine.Camera", "UnityEngine.Vector3&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)rect;
	params[1] = (intptr_t)&screenPoint;
	params[2] = (intptr_t)cam;
	params[3] = (intptr_t)&worldPoint;
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
bool UnityEngine_UIModule::UnityEngine::RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, UnityEngine_CoreModule::UnityEngine::Vector2 screenPoint, UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Vector2& localPoint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScreenPointToLocalPointInRectangle", std::vector<std::string> { "UnityEngine.RectTransform", "UnityEngine.Vector2", "UnityEngine.Camera", "UnityEngine.Vector2&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)rect;
	params[1] = (intptr_t)&screenPoint;
	params[2] = (intptr_t)cam;
	params[3] = (intptr_t)&localPoint;
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
UnityEngine_CoreModule::UnityEngine::Ray UnityEngine_UIModule::UnityEngine::RectTransformUtility::ScreenPointToRay(UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Vector2 screenPos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScreenPointToRay", std::vector<std::string> { "UnityEngine.Camera", "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cam;
	params[1] = (intptr_t)&screenPos;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Ray ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Ray));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Ray>(*(UnityEngine_CoreModule::UnityEngine::Ray*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_UIModule::UnityEngine::RectTransformUtility::WorldToScreenPoint(UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Vector3 worldPoint)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WorldToScreenPoint", std::vector<std::string> { "UnityEngine.Camera", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cam;
	params[1] = (intptr_t)&worldPoint;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UIModule::UnityEngine::RectTransformUtility::FlipLayoutOnAxis(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, int32_t axis, bool keepPositioning, bool recursive)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FlipLayoutOnAxis", std::vector<std::string> { "UnityEngine.RectTransform", "System.Int32", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)rect;
	params[1] = (intptr_t)&axis;
	params[2] = (intptr_t)&keepPositioning;
	params[3] = (intptr_t)&recursive;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::RectTransformUtility::FlipLayoutAxes(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, bool keepPositioning, bool recursive)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FlipLayoutAxes", std::vector<std::string> { "UnityEngine.RectTransform", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)rect;
	params[1] = (intptr_t)&keepPositioning;
	params[2] = (intptr_t)&recursive;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector2 UnityEngine_UIModule::UnityEngine::RectTransformUtility::GetTransposed(UnityEngine_CoreModule::UnityEngine::Vector2 input)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTransposed", std::vector<std::string> { "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&input;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UIModule::UnityEngine::RectTransformUtility::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::RectTransformUtility::PixelAdjustPoint_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& point, UnityEngine_CoreModule::UnityEngine::Transform* elementTransform, UnityEngine_UIModule::UnityEngine::Canvas* canvas, UnityEngine_CoreModule::UnityEngine::Vector2& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PixelAdjustPoint_Injected", std::vector<std::string> { "UnityEngine.Vector2&", "UnityEngine.Transform", "UnityEngine.Canvas", "UnityEngine.Vector2&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&point;
	params[1] = (intptr_t)elementTransform;
	params[2] = (intptr_t)canvas;
	params[3] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UIModule::UnityEngine::RectTransformUtility::PixelAdjustRect_Injected(UnityEngine_CoreModule::UnityEngine::RectTransform* rectTransform, UnityEngine_UIModule::UnityEngine::Canvas* canvas, UnityEngine_CoreModule::UnityEngine::Rect& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PixelAdjustRect_Injected", std::vector<std::string> { "UnityEngine.RectTransform", "UnityEngine.Canvas", "UnityEngine.Rect&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)rectTransform;
	params[1] = (intptr_t)canvas;
	params[2] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UIModule::UnityEngine::RectTransformUtility::PointInRectangle_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& screenPoint, UnityEngine_CoreModule::UnityEngine::RectTransform* rect, UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Vector4& offset)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PointInRectangle_Injected", std::vector<std::string> { "UnityEngine.Vector2&", "UnityEngine.RectTransform", "UnityEngine.Camera", "UnityEngine.Vector4&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&screenPoint;
	params[1] = (intptr_t)rect;
	params[2] = (intptr_t)cam;
	params[3] = (intptr_t)&offset;
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
