#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Rewired_Core::Rewired { struct InputAction; };
namespace mscorlib::System { template <typename T> struct Comparison_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct Joystick; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace Rewired_Core::Rewired { struct CustomController; };
namespace Rewired_Core::Rewired { struct Player; };
namespace Rewired_Core::Rewired { struct InputBehavior; };
namespace Rewired_Core::Rewired { struct Controller; };
namespace Rewired_Core::Rewired { struct Controller_Button; };
#include "Rewired_ControllerType.h"
namespace Rewired_Core::Rewired { struct Controller_Axis; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace Rewired_Core::Rewired { struct ControllerMap; };
namespace Rewired_Core::Rewired { struct ControllerMapWithAxes; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };
namespace Rewired_Core::Rewired { struct ControllerMapLayoutManager; };
namespace Rewired_Core::Rewired { struct ControllerMapLayoutManager_RuleSet; };
namespace Rewired_Core::Rewired { struct ControllerMapEnabler; };
namespace Rewired_Core::Rewired { struct ControllerMapEnabler_RuleSet; };
namespace Rewired_Core::Rewired { struct ControllerSetSelector; };
namespace Rewired_Core::Rewired { struct IControllerTemplate; };
namespace Rewired_Core::Rewired { struct IControllerTemplateElement; };
namespace Rewired_Core::Rewired { struct IControllerTemplateAxis; };
namespace Rewired_Core::Rewired { struct IControllerTemplateButton; };
namespace Rewired_Core::Rewired { struct IControllerTemplateAxisSource; };
namespace Rewired_Core::Rewired { struct IControllerTemplateButtonSource; };
namespace Rewired_Core::Rewired { struct IControllerElementTarget; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };

namespace Rewired_Core::Rewired::Dev::Tools
{
	struct DebugInformation : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _fontSize;
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* gwrjeELjFQbVfFZCONUrIFKPTtO;
		struct StaticFields
		{
			mscorlib::System::String* liiIUjgNAvbzBUVMSTgQwXeItgD;
			mscorlib::System::String* XMjgKiDzZlqzynaBZySVchbpoBF;
			int32_t vYHieSVDjKGYSioPxbBzEyeACJNZ;
			Rewired_Core::Rewired::Dev::Tools::DebugInformation* PxkTdIkXptwTeWPXwEumaEaSBxt;
			UnityEngine_CoreModule::UnityEngine::Vector2 GLUAxuOYesEetRxkFvieBjDqHIj;
			mscorlib::System::Comparison_1<Rewired_Core::Rewired::InputAction>* bVTlgPLfUDhXTUctSdAZiPPesdXo;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void OnEnable();
		void OnDisable();
		void OnGUI();
		static void DrawDebugInformation(bool enabled, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* foldouts);
		static void BVErmQnOLzvHGFDbXZcAbxKdkld(bool A_0, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_1);
		static void bFCoNbsOSMEoWHeiEroETKagnleD(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_0, mscorlib::System::String* A_1);
		static void JxCaqnQuqJzBIbrNHHNvXagzBLlK(mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Joystick>* A_0, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_1, mscorlib::System::String* A_2);
		static void ETMDUogyztHTIMghmRSKILIXEDzl(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_0, mscorlib::System::String* A_1);
		static void svGeSKtziAnMlUzCEVqCxfEfVNn(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_0, mscorlib::System::String* A_1);
		static void XvVhWwgbcyJESKKqTBtcgWkBvjG(mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::CustomController>* A_0, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_1, mscorlib::System::String* A_2);
		static void pKPGYCRRmfTSjtTNnKlCtmTEBut(Rewired_Core::Rewired::Player* A_0, int32_t A_1, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_2, mscorlib::System::String* A_3);
		static void upBLHalpXobdvOInhKQfegjtgCC(mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputBehavior>* A_0, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_1, mscorlib::System::String* A_2);
		static void eoWnguzrzTxGqaFmuBNceeZSsNN(Rewired_Core::Rewired::InputBehavior* A_0, int32_t A_1, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_2, mscorlib::System::String* A_3);
		static void bkmYacFWRxAtZdBGkGrwUZieNno(Rewired_Core::Rewired::Controller* A_0, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_1, mscorlib::System::String* A_2);
		static void XcyBLMhPNGpaXDrIEjkeiLwlOdI(mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Controller_Button>* A_0, Rewired_Core::Rewired::ControllerType A_1, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_2, mscorlib::System::String* A_3);
		static void TDKLhLxAbQCeMyOYkLvLLPeVyDG(mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Controller_Axis>* A_0, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_1, mscorlib::System::String* A_2);
		template <typename T> static void lmCJxJpFxOOWFdNeatHwGBlSQWj(Rewired_Core::Rewired::ControllerType A_0, mscorlib::System::Collections::Generic::IList_1<T>* A_1, mscorlib::System::String* A_2, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_3, mscorlib::System::String* A_4)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "lmCJxJpFxOOWFdNeatHwGBlSQWj");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)&A_0;
			params[1] = (intptr_t)A_1;
			params[2] = (intptr_t)A_2;
			params[3] = (intptr_t)A_3;
			params[4] = (intptr_t)A_4;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void qZkVpZxCmNbJSKmPzjXVnERDjzWt(Rewired_Core::Rewired::ControllerMap* A_0, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_1, mscorlib::System::String* A_2);
		static void qZkVpZxCmNbJSKmPzjXVnERDjzWt(Rewired_Core::Rewired::ControllerMapWithAxes* A_0, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_1, mscorlib::System::String* A_2);
		static void fYYDLhEbBQrKvjsUcGsDtoiUMewV(Rewired_Core::Rewired::ControllerType A_0, Rewired_Core::Rewired::ActionElementMap* A_1, int32_t A_2, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_3, mscorlib::System::String* A_4);
		static mscorlib::System::String* piiqsCkfuSyUysihvaNCGYmOyQt(Rewired_Core::Rewired::ActionElementMap* A_0);
		static void CNjwUiEQBUwMvEGswUAStQoVDGY(Rewired_Core::Rewired::ControllerMapLayoutManager* A_0, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_1, mscorlib::System::String* A_2);
		static void IpzSaXBmoVsjygMOnrRjANPEPJS(Rewired_Core::Rewired::ControllerMapLayoutManager_RuleSet* A_0, int32_t A_1, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_2, mscorlib::System::String* A_3);
		static void XHmbIHhszWCutbrHtVVJEJUIamDK(Rewired_Core::Rewired::ControllerMapEnabler* A_0, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_1, mscorlib::System::String* A_2);
		static void hKQcdcabTnsamfqUUVmrRVbjMaN(Rewired_Core::Rewired::ControllerMapEnabler_RuleSet* A_0, int32_t A_1, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_2, mscorlib::System::String* A_3);
		static void WhWAianQeYmvJnsgyQATQvfGCbm(Rewired_Core::Rewired::ControllerSetSelector* A_0, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_1, mscorlib::System::String* A_2);
		static void WbFPHWatbNoTjnFOdbUHLXjLbvb(Rewired_Core::Rewired::Controller* A_0, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_1, mscorlib::System::String* A_2);
		static void QSXXepFPxxkMDDNlOcWFBgOQLgiK(Rewired_Core::Rewired::IControllerTemplate* A_0, int32_t A_1, mscorlib::System::String* A_2, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_3);
		static void NbZGBdHJOtUukEiqqudjfjNtnQD(Rewired_Core::Rewired::IControllerTemplateElement* A_0, int32_t A_1, mscorlib::System::String* A_2, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_3);
		static void CdwHdmPxUndHfWkNlodfekOePzK(Rewired_Core::Rewired::IControllerTemplateAxis* A_0, mscorlib::System::String* A_1, mscorlib::System::String* A_2, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_3);
		static void ipEEWNPRaBapfgQsjsRiMNUWFCLp(Rewired_Core::Rewired::IControllerTemplateButton* A_0, mscorlib::System::String* A_1, mscorlib::System::String* A_2, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_3);
		static void BMTkQZJNatnlmEtaNBdBiDQtdOu(Rewired_Core::Rewired::IControllerTemplateAxis* A_0, mscorlib::System::String* A_1, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_2);
		static void GxwsYVoQBRDnkMzEJZWIdpaLsKx(Rewired_Core::Rewired::IControllerTemplateButton* A_0, mscorlib::System::String* A_1, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_2);
		static void NMnLtNEhEiMkVrUBlFFVGvuRSxN(Rewired_Core::Rewired::IControllerTemplateAxisSource* A_0, mscorlib::System::String* A_1, mscorlib::System::String* A_2, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_3);
		static void lLHDHgoTetaqaYXmSIOkHFEktXX(Rewired_Core::Rewired::IControllerTemplateButtonSource* A_0, mscorlib::System::String* A_1, mscorlib::System::String* A_2, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_3);
		static void vTnjBFebapgyteDtqhqQbHEOMRr(Rewired_Core::Rewired::IControllerElementTarget* A_0, mscorlib::System::String* A_1, mscorlib::System::String* A_2, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* A_3);
		static bool hXZYICwiKnWRLytZgtaFRLqfzzy(mscorlib::System::String* A_0, bool A_1);
		static UnityEngine_IMGUIModule::UnityEngine::GUIStyle* dwxcpPzdtLtUUcQOnHmiQUsNWCb();
		static UnityEngine_IMGUIModule::UnityEngine::GUIStyle* GetToggleStyle();
		static UnityEngine_IMGUIModule::UnityEngine::GUIStyle* msHGIMXMJpbfsjeyiipbuQfXhrdd(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* A_0);
		void _ctor();
		static int32_t FPdAyXCoumEseHAMoqpKAPttfHfC(Rewired_Core::Rewired::InputAction* A_0, Rewired_Core::Rewired::InputAction* A_1);
	};
}

