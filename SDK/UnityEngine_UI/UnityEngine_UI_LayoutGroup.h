#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_UIBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RectOffset; };
#include "..\UnityEngine_TextRenderingModule\UnityEngine_TextAnchor.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\UnityEngine_CoreModule\UnityEngine_DrivenRectTransformTracker.h"
namespace UnityEngine_CoreModule::UnityEngine { struct DrivenRectTransformTracker; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct LayoutGroup : UnityEngine_UI::UnityEngine::EventSystems::UIBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::RectOffset* m_Padding;
		UnityEngine_TextRenderingModule::UnityEngine::TextAnchor m_ChildAlignment;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_Rect;
		UnityEngine_CoreModule::UnityEngine::DrivenRectTransformTracker m_Tracker;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_TotalMinSize;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_TotalPreferredSize;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_TotalFlexibleSize;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::RectTransform>* m_RectChildren;
		UnityEngine_CoreModule::UnityEngine::RectOffset* get_padding();
		void set_padding(UnityEngine_CoreModule::UnityEngine::RectOffset* value);
		UnityEngine_TextRenderingModule::UnityEngine::TextAnchor get_childAlignment();
		void set_childAlignment(UnityEngine_TextRenderingModule::UnityEngine::TextAnchor value);
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_rectTransform();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::RectTransform>* get_rectChildren();
		void CalculateLayoutInputHorizontal();
		void CalculateLayoutInputVertical();
		float get_minWidth();
		float get_preferredWidth();
		float get_flexibleWidth();
		float get_minHeight();
		float get_preferredHeight();
		float get_flexibleHeight();
		int32_t get_layoutPriority();
		void SetLayoutHorizontal();
		void SetLayoutVertical();
		void _ctor();
		void OnEnable();
		void OnDisable();
		void OnDidApplyAnimationProperties();
		float GetTotalMinSize(int32_t axis);
		float GetTotalPreferredSize(int32_t axis);
		float GetTotalFlexibleSize(int32_t axis);
		float GetStartOffset(int32_t axis, float requiredSpaceWithoutPadding);
		float GetAlignmentOnAxis(int32_t axis);
		void SetLayoutInputForAxis(float totalMin, float totalPreferred, float totalFlexible, int32_t axis);
		void SetChildAlongAxis(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, int32_t axis, float pos);
		void SetChildAlongAxisWithScale(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, int32_t axis, float pos, float scaleFactor);
		void SetChildAlongAxis(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, int32_t axis, float pos, float size);
		void SetChildAlongAxisWithScale(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, int32_t axis, float pos, float size, float scaleFactor);
		bool get_isRootLayoutGroup();
		void OnRectTransformDimensionsChange();
		void OnTransformChildrenChanged();
		template <typename T> void SetProperty(T& currentValue, T* newValue)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetProperty", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"&", GetGenericTypeName<T>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&currentValue;
			params[1] = (intptr_t)newValue;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void SetDirty();
		mscorlib::System::Collections::IEnumerator* DelayedSetDirty(UnityEngine_CoreModule::UnityEngine::RectTransform* rectTransform);
	};
}

