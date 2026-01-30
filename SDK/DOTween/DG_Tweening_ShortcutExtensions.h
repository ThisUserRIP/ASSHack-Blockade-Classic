#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "DG_Tweening_Plugins_Options_FloatOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct FloatOptions; };
namespace DOTween::DG::Tweening::Core { template <typename T1, typename T2, typename TPlugOptions> struct TweenerCore_3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "DG_Tweening_Plugins_Options_ColorOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct ColorOptions; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "DG_Tweening_Plugins_Options_RectOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct RectOptions; };
namespace DOTween::DG::Tweening { struct Tweener; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };
namespace UnityEngine_CoreModule::UnityEngine { struct LineRenderer; };
#include "DG_Tweening_Color2.h"
namespace DOTween::DG::Tweening { struct Color2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "DG_Tweening_Plugins_Options_VectorOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct VectorOptions; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
namespace UnityEngine_CoreModule::UnityEngine { struct TrailRenderer; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "DG_Tweening_Plugins_Options_QuaternionOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct QuaternionOptions; };
#include "DG_Tweening_RotateMode.h"
#include "DG_Tweening_Plugins_Options_NoOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct NoOptions; };
#include "DG_Tweening_AxisConstraint.h"
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace DOTween::DG::Tweening { struct Sequence; };
namespace DOTween::DG::Tweening::Plugins::Core::PathCore { struct Path; };
#include "DG_Tweening_Plugins_Options_PathOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct PathOptions; };
#include "DG_Tweening_PathType.h"
#include "DG_Tweening_PathMode.h"
namespace DOTween::DG::Tweening { struct Tween; };
namespace UnityEngine_CoreModule::UnityEngine { struct Component; };

namespace DOTween::DG::Tweening
{
	struct ShortcutExtensions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOAspect(UnityEngine_CoreModule::UnityEngine::Camera* target, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOColor(UnityEngine_CoreModule::UnityEngine::Camera* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOFarClipPlane(UnityEngine_CoreModule::UnityEngine::Camera* target, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOFieldOfView(UnityEngine_CoreModule::UnityEngine::Camera* target, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DONearClipPlane(UnityEngine_CoreModule::UnityEngine::Camera* target, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOOrthoSize(UnityEngine_CoreModule::UnityEngine::Camera* target, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Rect, UnityEngine_CoreModule::UnityEngine::Rect, DOTween::DG::Tweening::Plugins::Options::RectOptions>* DOPixelRect(UnityEngine_CoreModule::UnityEngine::Camera* target, UnityEngine_CoreModule::UnityEngine::Rect endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Rect, UnityEngine_CoreModule::UnityEngine::Rect, DOTween::DG::Tweening::Plugins::Options::RectOptions>* DORect(UnityEngine_CoreModule::UnityEngine::Camera* target, UnityEngine_CoreModule::UnityEngine::Rect endValue, float duration);
		static DOTween::DG::Tweening::Tweener* DOShakePosition(UnityEngine_CoreModule::UnityEngine::Camera* target, float duration, float strength, int32_t vibrato, float randomness, bool fadeOut);
		static DOTween::DG::Tweening::Tweener* DOShakePosition(UnityEngine_CoreModule::UnityEngine::Camera* target, float duration, UnityEngine_CoreModule::UnityEngine::Vector3 strength, int32_t vibrato, float randomness, bool fadeOut);
		static DOTween::DG::Tweening::Tweener* DOShakeRotation(UnityEngine_CoreModule::UnityEngine::Camera* target, float duration, float strength, int32_t vibrato, float randomness, bool fadeOut);
		static DOTween::DG::Tweening::Tweener* DOShakeRotation(UnityEngine_CoreModule::UnityEngine::Camera* target, float duration, UnityEngine_CoreModule::UnityEngine::Vector3 strength, int32_t vibrato, float randomness, bool fadeOut);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOColor(UnityEngine_CoreModule::UnityEngine::Light* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOIntensity(UnityEngine_CoreModule::UnityEngine::Light* target, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOShadowStrength(UnityEngine_CoreModule::UnityEngine::Light* target, float endValue, float duration);
		static DOTween::DG::Tweening::Tweener* DOColor(UnityEngine_CoreModule::UnityEngine::LineRenderer* target, DOTween::DG::Tweening::Color2 startValue, DOTween::DG::Tweening::Color2 endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOColor(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOColor(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Color endValue, mscorlib::System::String* property, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOColor(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Color endValue, int32_t propertyID, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOFade(UnityEngine_CoreModule::UnityEngine::Material* target, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOFade(UnityEngine_CoreModule::UnityEngine::Material* target, float endValue, mscorlib::System::String* property, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOFade(UnityEngine_CoreModule::UnityEngine::Material* target, float endValue, int32_t propertyID, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOFloat(UnityEngine_CoreModule::UnityEngine::Material* target, float endValue, mscorlib::System::String* property, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOFloat(UnityEngine_CoreModule::UnityEngine::Material* target, float endValue, int32_t propertyID, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOOffset(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOOffset(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, mscorlib::System::String* property, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTiling(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOTiling(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, mscorlib::System::String* property, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOVector(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Vector4 endValue, mscorlib::System::String* property, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOVector(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Vector4 endValue, int32_t propertyID, float duration);
		static DOTween::DG::Tweening::Tweener* DOResize(UnityEngine_CoreModule::UnityEngine::TrailRenderer* target, float toStartWidth, float toEndWidth, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOTime(UnityEngine_CoreModule::UnityEngine::TrailRenderer* target, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOMove(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOMoveX(UnityEngine_CoreModule::UnityEngine::Transform* target, float endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOMoveY(UnityEngine_CoreModule::UnityEngine::Transform* target, float endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOMoveZ(UnityEngine_CoreModule::UnityEngine::Transform* target, float endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOLocalMove(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOLocalMoveX(UnityEngine_CoreModule::UnityEngine::Transform* target, float endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOLocalMoveY(UnityEngine_CoreModule::UnityEngine::Transform* target, float endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOLocalMoveZ(UnityEngine_CoreModule::UnityEngine::Transform* target, float endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::QuaternionOptions>* DORotate(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float duration, DOTween::DG::Tweening::RotateMode mode);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Quaternion, DOTween::DG::Tweening::Plugins::Options::NoOptions>* DORotateQuaternion(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Quaternion endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::QuaternionOptions>* DOLocalRotate(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float duration, DOTween::DG::Tweening::RotateMode mode);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Quaternion, DOTween::DG::Tweening::Plugins::Options::NoOptions>* DOLocalRotateQuaternion(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Quaternion endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOScale(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOScale(UnityEngine_CoreModule::UnityEngine::Transform* target, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOScaleX(UnityEngine_CoreModule::UnityEngine::Transform* target, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOScaleY(UnityEngine_CoreModule::UnityEngine::Transform* target, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOScaleZ(UnityEngine_CoreModule::UnityEngine::Transform* target, float endValue, float duration);
		static DOTween::DG::Tweening::Tweener* DOLookAt(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 towards, float duration, DOTween::DG::Tweening::AxisConstraint axisConstraint, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> up);
		static DOTween::DG::Tweening::Tweener* DOPunchPosition(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 punch, float duration, int32_t vibrato, float elasticity, bool snapping);
		static DOTween::DG::Tweening::Tweener* DOPunchScale(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 punch, float duration, int32_t vibrato, float elasticity);
		static DOTween::DG::Tweening::Tweener* DOPunchRotation(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 punch, float duration, int32_t vibrato, float elasticity);
		static DOTween::DG::Tweening::Tweener* DOShakePosition(UnityEngine_CoreModule::UnityEngine::Transform* target, float duration, float strength, int32_t vibrato, float randomness, bool snapping, bool fadeOut);
		static DOTween::DG::Tweening::Tweener* DOShakePosition(UnityEngine_CoreModule::UnityEngine::Transform* target, float duration, UnityEngine_CoreModule::UnityEngine::Vector3 strength, int32_t vibrato, float randomness, bool snapping, bool fadeOut);
		static DOTween::DG::Tweening::Tweener* DOShakeRotation(UnityEngine_CoreModule::UnityEngine::Transform* target, float duration, float strength, int32_t vibrato, float randomness, bool fadeOut);
		static DOTween::DG::Tweening::Tweener* DOShakeRotation(UnityEngine_CoreModule::UnityEngine::Transform* target, float duration, UnityEngine_CoreModule::UnityEngine::Vector3 strength, int32_t vibrato, float randomness, bool fadeOut);
		static DOTween::DG::Tweening::Tweener* DOShakeScale(UnityEngine_CoreModule::UnityEngine::Transform* target, float duration, float strength, int32_t vibrato, float randomness, bool fadeOut);
		static DOTween::DG::Tweening::Tweener* DOShakeScale(UnityEngine_CoreModule::UnityEngine::Transform* target, float duration, UnityEngine_CoreModule::UnityEngine::Vector3 strength, int32_t vibrato, float randomness, bool fadeOut);
		static DOTween::DG::Tweening::Sequence* DOJump(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float jumpPower, int32_t numJumps, float duration, bool snapping);
		static DOTween::DG::Tweening::Sequence* DOLocalJump(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float jumpPower, int32_t numJumps, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>* DOPath(UnityEngine_CoreModule::UnityEngine::Transform* target, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* path, float duration, DOTween::DG::Tweening::PathType pathType, DOTween::DG::Tweening::PathMode pathMode, int32_t resolution, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Color> gizmoColor);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>* DOLocalPath(UnityEngine_CoreModule::UnityEngine::Transform* target, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* path, float duration, DOTween::DG::Tweening::PathType pathType, DOTween::DG::Tweening::PathMode pathMode, int32_t resolution, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Color> gizmoColor);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>* DOPath(UnityEngine_CoreModule::UnityEngine::Transform* target, DOTween::DG::Tweening::Plugins::Core::PathCore::Path* path, float duration, DOTween::DG::Tweening::PathMode pathMode);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>* DOLocalPath(UnityEngine_CoreModule::UnityEngine::Transform* target, DOTween::DG::Tweening::Plugins::Core::PathCore::Path* path, float duration, DOTween::DG::Tweening::PathMode pathMode);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOTimeScale(DOTween::DG::Tweening::Tween* target, float endValue, float duration);
		static DOTween::DG::Tweening::Tweener* DOBlendableColor(UnityEngine_CoreModule::UnityEngine::Light* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration);
		static DOTween::DG::Tweening::Tweener* DOBlendableColor(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration);
		static DOTween::DG::Tweening::Tweener* DOBlendableColor(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Color endValue, mscorlib::System::String* property, float duration);
		static DOTween::DG::Tweening::Tweener* DOBlendableColor(UnityEngine_CoreModule::UnityEngine::Material* target, UnityEngine_CoreModule::UnityEngine::Color endValue, int32_t propertyID, float duration);
		static DOTween::DG::Tweening::Tweener* DOBlendableMoveBy(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 byValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Tweener* DOBlendableLocalMoveBy(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 byValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Tweener* DOBlendableRotateBy(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 byValue, float duration, DOTween::DG::Tweening::RotateMode mode);
		static DOTween::DG::Tweening::Tweener* DOBlendableLocalRotateBy(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 byValue, float duration, DOTween::DG::Tweening::RotateMode mode);
		static DOTween::DG::Tweening::Tweener* DOBlendablePunchRotation(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 punch, float duration, int32_t vibrato, float elasticity);
		static DOTween::DG::Tweening::Tweener* DOBlendableScaleBy(UnityEngine_CoreModule::UnityEngine::Transform* target, UnityEngine_CoreModule::UnityEngine::Vector3 byValue, float duration);
		static int32_t DOComplete(UnityEngine_CoreModule::UnityEngine::Component* target, bool withCallbacks);
		static int32_t DOComplete(UnityEngine_CoreModule::UnityEngine::Material* target, bool withCallbacks);
		static int32_t DOKill(UnityEngine_CoreModule::UnityEngine::Component* target, bool complete);
		static int32_t DOKill(UnityEngine_CoreModule::UnityEngine::Material* target, bool complete);
		static int32_t DOFlip(UnityEngine_CoreModule::UnityEngine::Component* target);
		static int32_t DOFlip(UnityEngine_CoreModule::UnityEngine::Material* target);
		static int32_t DOGoto(UnityEngine_CoreModule::UnityEngine::Component* target, float to, bool andPlay);
		static int32_t DOGoto(UnityEngine_CoreModule::UnityEngine::Material* target, float to, bool andPlay);
		static int32_t DOPause(UnityEngine_CoreModule::UnityEngine::Component* target);
		static int32_t DOPause(UnityEngine_CoreModule::UnityEngine::Material* target);
		static int32_t DOPlay(UnityEngine_CoreModule::UnityEngine::Component* target);
		static int32_t DOPlay(UnityEngine_CoreModule::UnityEngine::Material* target);
		static int32_t DOPlayBackwards(UnityEngine_CoreModule::UnityEngine::Component* target);
		static int32_t DOPlayBackwards(UnityEngine_CoreModule::UnityEngine::Material* target);
		static int32_t DOPlayForward(UnityEngine_CoreModule::UnityEngine::Component* target);
		static int32_t DOPlayForward(UnityEngine_CoreModule::UnityEngine::Material* target);
		static int32_t DORestart(UnityEngine_CoreModule::UnityEngine::Component* target, bool includeDelay);
		static int32_t DORestart(UnityEngine_CoreModule::UnityEngine::Material* target, bool includeDelay);
		static int32_t DORewind(UnityEngine_CoreModule::UnityEngine::Component* target, bool includeDelay);
		static int32_t DORewind(UnityEngine_CoreModule::UnityEngine::Material* target, bool includeDelay);
		static int32_t DOSmoothRewind(UnityEngine_CoreModule::UnityEngine::Component* target);
		static int32_t DOSmoothRewind(UnityEngine_CoreModule::UnityEngine::Material* target);
		static int32_t DOTogglePause(UnityEngine_CoreModule::UnityEngine::Component* target);
		static int32_t DOTogglePause(UnityEngine_CoreModule::UnityEngine::Material* target);
	};
}

