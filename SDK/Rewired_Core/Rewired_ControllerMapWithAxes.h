#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ControllerMap.h"
namespace Rewired_Core::Rewired { struct ActionElementMap; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_Pole.h"
#include "Rewired_ControllerElementType.h"
#include "Rewired_AxisRange.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T> struct Predicate_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace Rewired_Core::Rewired { struct ControllerMap; };
#include "Rewired_ElementAssignmentConflictCheck.h"
namespace Rewired_Core::Rewired { struct ElementAssignmentConflictCheck; };
#include "Rewired_ElementAssignmentConflictInfo.h"
namespace Rewired_Core::Rewired { struct ElementAssignmentConflictInfo; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { template <typename T> struct AList_1; };
namespace Rewired_Core::Rewired { struct IControllerElementTarget; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject; };

namespace Rewired_Core::Rewired
{
	struct ControllerMapWithAxes : Rewired_Core::Rewired::ControllerMap
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ActionElementMap>* FMYFkHftqFIfycARdgYAieSdZVkF;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Rewired_Core::Rewired::ActionElementMap>* cITiSwPPYQDTJKyNJRrkwoZZrNn;
		int32_t get_axisMapCount();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ActionElementMap>* get_AxisMaps();
		void _ctor();
		void _ctor(Rewired_Core::Rewired::ControllerMapWithAxes* controllerMap);
		bool ContainsAction(int32_t actionId);
		bool CreateElementMap(int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementIdentifierId, Rewired_Core::Rewired::ControllerElementType elementType, Rewired_Core::Rewired::AxisRange axisRange, bool invert, Rewired_Core::Rewired::ActionElementMap& result);
		bool ReplaceElementMap(int32_t elementMapId, int32_t actionId, Rewired_Core::Rewired::Pole axisContribution, int32_t elementIdentifierId, Rewired_Core::Rewired::ControllerElementType elementType, Rewired_Core::Rewired::AxisRange axisRange, bool invert, Rewired_Core::Rewired::ActionElementMap& result);
		bool DeleteElementMap(int32_t elementMapId);
		bool DeleteElementMapsWithAction(mscorlib::System::String* actionName);
		bool DeleteElementMapsWithAction(int32_t actionId);
		Rewired_Core::Rewired::ActionElementMap* GetElementMap(int32_t elementMapId);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithAction(int32_t actionId);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithAction(int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapMatch(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* A_1, bool A_2);
		int32_t GetElementMapMatches(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4);
		void ClearElementMaps();
		Rewired_Core::Rewired::ActionElementMap* GetAxisMap(int32_t index);
		IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* GetAxisMaps();
		IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* GetAxisMaps(bool skipDisabledMaps);
		int32_t GetAxisMaps(bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* GetAxisMapsWithAction(mscorlib::System::String* actionName);
		IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* GetAxisMapsWithAction(int32_t actionId);
		IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* GetAxisMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps);
		IL2CPP::Array<Rewired_Core::Rewired::ActionElementMap*>* GetAxisMapsWithAction(int32_t actionId, bool skipDisabledMaps);
		int32_t GetAxisMapsWithAction(mscorlib::System::String* actionName, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetAxisMapsWithAction(int32_t actionId, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetAxisMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetAxisMapsWithAction(int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* AxisMapsWithAction(mscorlib::System::String* actionName);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* AxisMapsWithAction(int32_t actionId);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* AxisMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* AxisMapsWithAction(int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstAxisMapWithAction(int32_t actionId);
		Rewired_Core::Rewired::ActionElementMap* GetFirstAxisMapWithAction(mscorlib::System::String* actionName);
		Rewired_Core::Rewired::ActionElementMap* GetFirstAxisMapWithAction(int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstAxisMapWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstAxisMapMatch(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* predicate);
		Rewired_Core::Rewired::ActionElementMap* oTHnugVazJNOVEppMDHpOXiMWdw(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* A_1, bool A_2);
		int32_t GetAxisMapMatches(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* predicate, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t wTDGPWHsuoMCmiReQdRPigeArAB(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4);
		void ForEachAxisMapMatch(mscorlib::System::Predicate_1<Rewired_Core::Rewired::ActionElementMap>* predicate, mscorlib::System::Action_1<Rewired_Core::Rewired::ActionElementMap>* actionToPerform);
		bool DeleteAxisMapsWithAction(mscorlib::System::String* actionName);
		bool DeleteAxisMapsWithAction(int32_t actionId);
		int32_t SetAllAxisMapsEnabled(bool state);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ControllerMap* controllerMap, bool skipDisabledMaps);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ActionElementMap* actionElementMap, bool skipDisabledMaps);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ControllerMap* controllerMap, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ActionElementMap* actionElementMap, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ControllerMap* controllerMap, bool skipDisabledMaps);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ActionElementMap* actionElementMap, bool skipDisabledMaps);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ControllerMap* A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ActionElementMap* A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4);
		IL2CPP::Array<mscorlib::System::String*>* GetAxisNames();
		Rewired_Core::Rewired::Utils::Classes::Data::AList_1<Rewired_Core::Rewired::ActionElementMap>* get_AxisMaps_orig();
		bool AddActionMapping_BeforeBake(Rewired_Core::Rewired::ActionElementMap* A_1);
		int32_t GetElementMaps_Append(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_1, bool A_2);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithMapping(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::ControllerElementType A_3);
		int32_t GetElementMapsWithElementIdentifier(int32_t A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_2, bool A_3);
		bool ContainsElementMapping(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::ControllerElementType A_3);
		int32_t FirstIndexOfElementMapping(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::ControllerElementType A_3);
		int32_t TfVYyzVtzHSsXunXZSoUkcRuYjc(int32_t A_1);
		int32_t WkBcfBJAJkZBXMuQsViLRAdLQRZv(bool A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_2, bool A_3);
		int32_t HhTPZpqHEqCaPgxuKyUaIZmjJQS(int32_t A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4);
		int32_t GetElementMapsWithAction(int32_t A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* A_1, bool A_2, int32_t A_3, bool A_4, bool& A_5);
		int32_t GetElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* A_1, bool A_2, int32_t A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5, bool A_6, bool& A_7);
		bool AddElementMap(Rewired_Core::Rewired::ActionElementMap* A_1);
		bool wxQwTHgtXdcMqmRsHxQvFWscVgg(Rewired_Core::Rewired::ControllerElementType A_1);
		void ryzxKRdQHpmEINkYmCRSHNUZRFes(int32_t A_1, int32_t A_2);
		void TpChyiEAddZkgMBdJitmcYoCUnYD(Rewired_Core::Rewired::ActionElementMap* A_1);
		void UTEKArURFTgzybKKSFrlaqngcUqd(Rewired_Core::Rewired::ActionElementMap* A_1, int32_t A_2);
		void ExportDataToSerializedObject(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* A_1);
		bool Import(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* A_1);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* BClfpziPWHAwMaSvoMpaMrAiXiY(Rewired_Core::Rewired::ControllerMap* A_1, bool A_2);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* uwtDCNeJzCIFYjmUnWTwbqafUYsA(Rewired_Core::Rewired::ActionElementMap* A_1, bool A_2);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* kScsKtGxpAzmpgGSNEwioDeUOG(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2);
	};
}

