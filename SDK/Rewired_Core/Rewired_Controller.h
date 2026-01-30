#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "Rewired_ControllerType.h"
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };
#include "Rewired_ControllerIdentifier.h"
namespace Rewired_Core::Rewired { struct ControllerIdentifier; };
namespace Rewired_Core::Rewired { struct Controller_Button; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
namespace Rewired_Core::Rewired { struct Controller_Element; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "Rewired_InputSource.h"
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };
namespace Rewired_Core::Rewired { struct HardwareControllerMap_Game; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace Rewired_Core::Rewired { struct IControllerTemplate; };
namespace mscorlib::System { template <typename T1, typename T2, typename TResult> struct Func_3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct ControllerElementIdentifier; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareButtonInfo; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "Rewired_ControllerPollingInfo.h"
namespace Rewired_Core::Rewired { struct ControllerPollingInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "Rewired_UpdateLoopType.h"
#include "Rewired_ButtonStateFlags.h"
namespace Rewired_Core::Rewired { struct ControllerMap; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };

namespace Rewired_Core::Rewired
{
	struct Controller : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t id;
		mscorlib::System::String* _tag;
		mscorlib::System::String* _name;
		mscorlib::System::String* _hardwareName;
		Rewired_Core::Rewired::ControllerType _type;
		mscorlib::System::Guid hDawOIOjFdUihGVVhSZJFEMtFLH;
		mscorlib::System::String* _hardwareIdentifier;
		bool _isConnected;
		Rewired_Core::Rewired::Controller_Extension* skKvcpwwTuJAjFXvFLWKIavZCmp;
		bool eEGiIPEupbQLDWwJrozxiWefseDw;
		Rewired_Core::Rewired::ControllerIdentifier BoRZVTfPlqmHKcIuyXTWZLqhIhj;
		int32_t CegCZCxKXWIRHZSULEYHhSHkAZS;
		int32_t _buttonCount;
		IL2CPP::Array<Rewired_Core::Rewired::Controller_Button*>* buttons;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Rewired_Core::Rewired::Controller_Button>* buttons_readOnly;
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Controller_Element>* limitbLPQHBEREoTlrBWoQCATCG;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Rewired_Core::Rewired::Controller_Element>* BVfiWcyjQaipjiuPedRfeAYWjXl;
		Rewired_Core::Rewired::InputSource nfoumPigLVnyolJsGocQXFVwskW;
		Rewired_Core::Rewired::ControllerDataUpdater* TcNmLyQqQgAEafNVWTkIltQuJDJA;
		Rewired_Core::Rewired::HardwareControllerMap_Game* uwwUXKFpZybEWujWMaLDtoKrRAa;
		uint32_t eEufgMxduaIfHpItwpLxxiDXIbiC;
		uint32_t kXaMKffhCrHJqeDaDqSuWSHlnIm;
		uint32_t dYgcnmFqrNpDPktLqlKNrsbmJoA;
		mscorlib::System::Action_1<mscorlib::System::Boolean>* cdlYJRuHCDMOFyGAdzsbylqVyav;
		IL2CPP::Array<Rewired_Core::Rewired::IControllerTemplate*>* XHMLLriSmUEBUPjwqAfbNVscTur;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Rewired_Core::Rewired::IControllerTemplate>* NpUujsekiamBStuVddbjXAVIvoM;
		struct StaticFields
		{
			mscorlib::System::Func_3<Rewired_Core::Rewired::Controller, mscorlib::System::Guid, mscorlib::System::Boolean>* chthAukZhfRhCLKKXEcvGmKnDWfo;
			mscorlib::System::Func_3<Rewired_Core::Rewired::Controller, mscorlib::System::Type, mscorlib::System::Boolean>* tLJhXVneaQghghHCdDXnfTcxEwOH;
			mscorlib::System::Func_3<Rewired_Core::Rewired::Controller, mscorlib::System::Guid, mscorlib::System::Boolean>* buDNmfAKAJmuFphmRGuKdPGdKrTu;
			mscorlib::System::Func_3<Rewired_Core::Rewired::Controller, mscorlib::System::Type, mscorlib::System::Boolean>* gfuYTDVqGtxGTfuJJGoJXEFIMBI;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_wasPollingPrev();
		bool get_enabled();
		void set_enabled(bool value);
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		mscorlib::System::String* get_tag();
		void set_tag(mscorlib::System::String* value);
		mscorlib::System::String* get_hardwareName();
		Rewired_Core::Rewired::ControllerType get_type();
		mscorlib::System::Guid get_hardwareTypeGuid();
		mscorlib::System::Guid get_deviceInstanceGuid();
		Rewired_Core::Rewired::ControllerIdentifier get_identifier();
		bool get_isConnected();
		void set_isConnected(bool value);
		mscorlib::System::String* get_hardwareIdentifier();
		mscorlib::System::String* get_mapTypeString();
		int32_t get_elementCount();
		int32_t get_buttonCount();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Controller_Element>* get_Elements();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Controller_Button>* get_Buttons();
		Rewired_Core::Rewired::Controller_Extension* get_extension();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerElementIdentifier>* get_ElementIdentifiers();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerElementIdentifier>* get_ButtonElementIdentifiers();
		void add_EnabledStateChangedEvent(mscorlib::System::Action_1<mscorlib::System::Boolean>* value);
		void remove_EnabledStateChangedEvent(mscorlib::System::Action_1<mscorlib::System::Boolean>* value);
		void _ctor(int32_t controllerId, Rewired_Core::Rewired::InputSource inputSource, mscorlib::System::String* name, mscorlib::System::String* hardwareName, mscorlib::System::String* hardwareIdentifier, Rewired_Core::Rewired::ControllerType type, mscorlib::System::Guid hardwareTypeGuid, int32_t buttonCount, IL2CPP::Array<bool>* isButtonPressureSensitive, IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareButtonInfo*>* hwButtonInfo, Rewired_Core::Rewired::HardwareControllerMap_Game* hardwareMap, Rewired_Core::Rewired::Controller_Extension* extension, Rewired_Core::Rewired::ControllerDataUpdater* dataUpdater);
		void DJOuOoAJzppPRspONxNsbmodBtuk();
		Rewired_Core::Rewired::Controller_Element* GetElementById(int32_t elementIdentifierId);
		int32_t GetButtonIndexById(int32_t elementIdentifierId);
		Rewired_Core::Rewired::ControllerElementIdentifier* GetElementIdentifierById(int32_t elementIdentifierId);
		bool GetButton(int32_t index);
		bool GetButtonDown(int32_t index);
		bool GetButtonUp(int32_t index);
		bool GetButtonChanged(int32_t index);
		bool GetButtonPrev(int32_t index);
		bool GetButtonDoublePressHold(int32_t index);
		bool GetButtonDoublePressHold(int32_t index, float speed);
		bool GetButtonDoublePressDown(int32_t index);
		bool GetButtonDoublePressDown(int32_t index, float speed);
		double GetButtonTimePressed(int32_t index);
		double GetButtonTimeUnpressed(int32_t index);
		double GetButtonLastTimePressed(int32_t index);
		double GetButtonLastTimeUnpressed(int32_t index);
		bool GetAnyButton();
		bool GetAnyButtonDown();
		bool GetAnyButtonUp();
		bool GetAnyButtonPrev();
		bool GetAnyButtonChanged();
		bool GetButtonById(int32_t elementIdentifierId);
		bool GetButtonDownById(int32_t elementIdentifierId);
		bool GetButtonUpById(int32_t elementIdentifierId);
		bool GetButtonDoublePressHoldById(int32_t elementIdentifierId, float speed);
		bool GetButtonDoublePressDownById(int32_t elementIdentifierId, float speed);
		bool GetButtonDoublePressHoldById(int32_t elementIdentifierId);
		bool GetButtonDoublePressDownById(int32_t elementIdentifierId);
		bool GetButtonPrevById(int32_t elementIdentifierId);
		double GetButtonTimePressedById(int32_t elementIdentifierId);
		double GetButtonTimeUnpressedById(int32_t elementIdentifierId);
		double GetButtonLastTimePressedById(int32_t elementIdentifierId);
		double GetButtonLastTimeUnpressedById(int32_t elementIdentifierId);
		Rewired_Core::Rewired::ControllerPollingInfo PollForFirstElement();
		Rewired_Core::Rewired::ControllerPollingInfo PollForFirstElementDown();
		Rewired_Core::Rewired::ControllerPollingInfo PollForFirstButton();
		Rewired_Core::Rewired::ControllerPollingInfo PollForFirstButtonDown();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollForAllElements();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollForAllElementsDown();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollForAllButtons();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollForAllButtonsDown();
		bool koaVXUOJmvFjiDxRJMJbcmsCCeU(int32_t A_1, int32_t& A_2);
		bool eHvgAePuRgFdtkyCrBigtpPBOcc(int32_t A_1, int32_t& A_2);
		void UpdatePollingFrameTracking();
		double GetLastTimeActive();
		double GetLastTimeActive(bool useRawValues);
		double GetLastTimeAnyElementChanged();
		double GetLastTimeAnyElementChanged(bool useRawValues);
		double GetLastTimeAnyButtonPressed();
		double GetLastTimeAnyButtonChanged();
		template <typename T> T* GetExtension()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExtension");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::IControllerTemplate>* get_Templates();
		int32_t get_templateCount();
		Rewired_Core::Rewired::IControllerTemplate* GetTemplate(mscorlib::System::Guid typeGuid);
		Rewired_Core::Rewired::IControllerTemplate* GetTemplate(mscorlib::System::Type* type);
		template <typename T> T* GetTemplate()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTemplate");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		bool ImplementsTemplate(mscorlib::System::Guid typeGuid);
		bool ImplementsTemplate(mscorlib::System::Type* type);
		template <typename T> bool ImplementsTemplate()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ImplementsTemplate");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		void WVgyfHTtyWocPYKBcsQqZRdstBZ(IL2CPP::Array<Rewired_Core::Rewired::IControllerTemplate*>* A_1);
		void UpdateData(Rewired_Core::Rewired::UpdateLoopType A_1);
		Rewired_Core::Rewired::ButtonStateFlags LolVNDMQpBdOzUpUoNPgDgJlNeF(int32_t A_1);
		void XWdIaEXHNWYhAJeuwTvUYsaaUTm(Rewired_Core::Rewired::Controller_Extension* A_1);
		void BQyAxblWSrSLUKKsAlErkZUoVGg(Rewired_Core::Rewired::Controller_Extension* A_1);
		void Clear();
		bool SetEnabled(bool A_1);
		void BakeMap(Rewired_Core::Rewired::ControllerMap* A_1);
		void BakeActionElementMap(Rewired_Core::Rewired::ControllerMap* A_1, Rewired_Core::Rewired::ActionElementMap* A_2);
		bool APUliQbJEkPMBjxgPRsskHqsbSB(Rewired_Core::Rewired::ActionElementMap* A_1, int32_t A_2, float& A_3, bool& A_4);
		bool APUliQbJEkPMBjxgPRsskHqsbSB(Rewired_Core::Rewired::ActionElementMap* A_1, int32_t A_2, bool A_3, float& A_4);
		void PpjIXoIAPvXitJiZFfGrcxhBUoyV(Rewired_Core::Rewired::Controller_Element* A_1);
		mscorlib::System::Guid xZQDrFKXDuhfkieFgrRBuUisDpCr();
		void Connected();
		void Disconnected();
		static mscorlib::System::Func_3<Rewired_Core::Rewired::Controller, mscorlib::System::Guid, mscorlib::System::Boolean>* get_implementsTemplateDelegate_Guid();
		static mscorlib::System::Func_3<Rewired_Core::Rewired::Controller, mscorlib::System::Type, mscorlib::System::Boolean>* get_implementsTemplateDelegate_Type();
		static bool SApoXLDczsVNZHELfycVYjdZBfHH(Rewired_Core::Rewired::Controller* A_0, mscorlib::System::Guid A_1);
		static bool kxBQGurDVGCutWJrcHxThonLTTt(Rewired_Core::Rewired::Controller* A_0, mscorlib::System::Type* A_1);
	};
}

