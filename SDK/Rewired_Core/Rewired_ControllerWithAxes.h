#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ControllerWithMap.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct Controller_Axis; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
namespace Rewired_Core::Rewired { struct Controller_Axis2D; };
namespace Rewired_Core::Rewired { struct CalibrationMap; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace Rewired_Core::Rewired { struct ControllerElementIdentifier; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_InputSource.h"
namespace mscorlib::System { struct String; };
#include "Rewired_ControllerType.h"
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct HardwareControllerMap_Game; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };
namespace Rewired_Core::Rewired { struct Controller_Element; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "Rewired_ControllerPollingInfo.h"
namespace Rewired_Core::Rewired { struct ControllerPollingInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "Rewired_Pole.h"
#include "Rewired_UpdateLoopType.h"
namespace Rewired_Core::Rewired { struct ActionElementMap; };
namespace Rewired_Core::Rewired { struct ControllerMap; };

namespace Rewired_Core::Rewired
{
	struct ControllerWithAxes : Rewired_Core::Rewired::ControllerWithMap
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _axisCount;
		int32_t _axis2DCount;
		IL2CPP::Array<Rewired_Core::Rewired::Controller_Axis*>* axes;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Rewired_Core::Rewired::Controller_Axis>* axes_readOnly;
		IL2CPP::Array<Rewired_Core::Rewired::Controller_Axis2D*>* axes2D;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Rewired_Core::Rewired::Controller_Axis2D>* axes2D_readOnly;
		Rewired_Core::Rewired::CalibrationMap* _calibrationMap;
		IL2CPP::Array<float>* ZMgUczdGnwdOnipZaYQmgnsIgpnZ;
		uint32_t mLIdNqcQXYxMCECptijahJvgGixW;
		mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Int32>* lNHXhXHuwDMQFEQVdcISIevhozUB;
		int32_t get_axisCount();
		int32_t get_axis2DCount();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Controller_Axis>* get_Axes();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Controller_Axis2D>* get_Axes2D();
		Rewired_Core::Rewired::CalibrationMap* get_calibrationMap();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerElementIdentifier>* get_AxisElementIdentifiers();
		void _ctor(int32_t controllerId, Rewired_Core::Rewired::InputSource inputSource, mscorlib::System::String* name, mscorlib::System::String* hardwareName, mscorlib::System::String* hardwareIdentifier, Rewired_Core::Rewired::ControllerType type, mscorlib::System::Guid hardwareTypeGuid, int32_t axisCount, int32_t buttonCount, IL2CPP::Array<bool>* isButtonPressureSensitive, Rewired_Core::Rewired::HardwareControllerMap_Game* hardwareMap, Rewired_Core::Rewired::Controller_Extension* extension, Rewired_Core::Rewired::ControllerDataUpdater* dataUpdater);
		Rewired_Core::Rewired::Controller_Element* GetElementById(int32_t elementIdentifierId);
		int32_t GetAxisIndexById(int32_t elementIdentifierId);
		float GetAxis(int32_t index);
		float GetAxisPrev(int32_t index);
		float GetAxisRaw(int32_t index);
		float GetAxisRawPrev(int32_t index);
		double GetAxisTimeActive(int32_t index);
		double GetAxisTimeInactive(int32_t index);
		double GetAxisLastTimeActive(int32_t index);
		double GetAxisLastTimeInactive(int32_t index);
		double GetAxisRawTimeActive(int32_t index);
		double GetAxisRawTimeInactive(int32_t index);
		double GetAxisRawLastTimeActive(int32_t index);
		double GetAxisRawLastTimeInactive(int32_t index);
		float GetAxisById(int32_t elementIdentifierId);
		float GetAxisPrevById(int32_t elementIdentifierId);
		float GetAxisRawById(int32_t elementIdentifierId);
		float GetAxisRawPrevById(int32_t elementIdentifierId);
		double GetAxisTimeActiveById(int32_t elementIdentifierId);
		double GetAxisTimeInactiveById(int32_t elementIdentifierId);
		double GetAxisLastTimeActiveById(int32_t elementIdentifierId);
		double GetAxisLastTimeInactiveById(int32_t elementIdentifierId);
		double GetAxisRawTimeActiveById(int32_t elementIdentifierId);
		double GetAxisRawTimeInactiveById(int32_t elementIdentifierId);
		double GetAxisRawLastTimeActiveById(int32_t elementIdentifierId);
		double GetAxisRawLastTimeInactiveById(int32_t elementIdentifierId);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetAxis2D(int32_t index);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetAxis2DPrev(int32_t index);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetAxis2DRaw(int32_t index);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetAxis2DRawPrev(int32_t index);
		double GetLastTimeActive();
		double GetLastTimeActive(bool useRawValues);
		double GetLastTimeAnyElementChanged();
		double GetLastTimeAnyElementChanged(bool useRawValues);
		double GetLastTimeAnyAxisActive();
		double GetLastTimeAnyAxisActive(bool useRawValues);
		double GetLastTimeAnyAxisChanged();
		double GetLastTimeAnyAxisChanged(bool useRawValues);
		Rewired_Core::Rewired::ControllerPollingInfo PollForFirstElement();
		Rewired_Core::Rewired::ControllerPollingInfo PollForFirstElementDown();
		Rewired_Core::Rewired::ControllerPollingInfo PollForFirstAxis();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollForAllElements();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollForAllElementsDown();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollForAllAxes();
		void iaoQNrzERAfrZtGlwRKXYhfNfxB();
		bool IsPolledAxisActive(int32_t index, Rewired_Core::Rewired::Pole& pole, int32_t& elementIdentifierId);
		bool ImportCalibrationMapFromXmlString(mscorlib::System::String* xmlString);
		bool ImportCalibrationMapFromJsonString(mscorlib::System::String* jsonString);
		void UpdateData(Rewired_Core::Rewired::UpdateLoopType A_1);
		bool uUGbWbWrCNTLasqKTiCVtDRhyXY(Rewired_Core::Rewired::ActionElementMap* A_1, int32_t A_2, bool A_3, bool A_4, float& A_5);
		void BakeMap(Rewired_Core::Rewired::ControllerMap* A_1);
		void BakeActionElementMap(Rewired_Core::Rewired::ControllerMap* A_1, Rewired_Core::Rewired::ActionElementMap* A_2);
		void YzmpsOiKBTDzbaCeVUvkPekPgfgR();
		void Clear();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* GjTtITimkOeNVuEGyrtFBjwCctY();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* BClfpziPWHAwMaSvoMpaMrAiXiY();
	};
}

