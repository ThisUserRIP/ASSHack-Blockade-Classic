#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_UIModule::UnityEngine { struct Canvas; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\UnityEngine_CoreModule\UnityEngine_Ray.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Ray; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_UIModule::UnityEngine
{
	struct RectTransformUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* s_Corners;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Vector2 PixelAdjustPoint(UnityEngine_CoreModule::UnityEngine::Vector2 point, UnityEngine_CoreModule::UnityEngine::Transform* elementTransform, UnityEngine_UIModule::UnityEngine::Canvas* canvas);
		static UnityEngine_CoreModule::UnityEngine::Rect PixelAdjustRect(UnityEngine_CoreModule::UnityEngine::RectTransform* rectTransform, UnityEngine_UIModule::UnityEngine::Canvas* canvas);
		static bool PointInRectangle(UnityEngine_CoreModule::UnityEngine::Vector2 screenPoint, UnityEngine_CoreModule::UnityEngine::RectTransform* rect, UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Vector4 offset);
		static bool RectangleContainsScreenPoint(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, UnityEngine_CoreModule::UnityEngine::Vector2 screenPoint, UnityEngine_CoreModule::UnityEngine::Camera* cam);
		static bool RectangleContainsScreenPoint(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, UnityEngine_CoreModule::UnityEngine::Vector2 screenPoint, UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Vector4 offset);
		static bool ScreenPointToWorldPointInRectangle(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, UnityEngine_CoreModule::UnityEngine::Vector2 screenPoint, UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Vector3& worldPoint);
		static bool ScreenPointToLocalPointInRectangle(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, UnityEngine_CoreModule::UnityEngine::Vector2 screenPoint, UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Vector2& localPoint);
		static UnityEngine_CoreModule::UnityEngine::Ray ScreenPointToRay(UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Vector2 screenPos);
		static UnityEngine_CoreModule::UnityEngine::Vector2 WorldToScreenPoint(UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Vector3 worldPoint);
		static void FlipLayoutOnAxis(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, int32_t axis, bool keepPositioning, bool recursive);
		static void FlipLayoutAxes(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, bool keepPositioning, bool recursive);
		static UnityEngine_CoreModule::UnityEngine::Vector2 GetTransposed(UnityEngine_CoreModule::UnityEngine::Vector2 input);
		static void _cctor();
		static void PixelAdjustPoint_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& point, UnityEngine_CoreModule::UnityEngine::Transform* elementTransform, UnityEngine_UIModule::UnityEngine::Canvas* canvas, UnityEngine_CoreModule::UnityEngine::Vector2& ret);
		static void PixelAdjustRect_Injected(UnityEngine_CoreModule::UnityEngine::RectTransform* rectTransform, UnityEngine_UIModule::UnityEngine::Canvas* canvas, UnityEngine_CoreModule::UnityEngine::Rect& ret);
		static bool PointInRectangle_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& screenPoint, UnityEngine_CoreModule::UnityEngine::RectTransform* rect, UnityEngine_CoreModule::UnityEngine::Camera* cam, UnityEngine_CoreModule::UnityEngine::Vector4& offset);
	};
}

