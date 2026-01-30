#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Utils_Classes_CodeHelper.h"
#include "Rewired_ReInput_ControllerHelper.h"
namespace Rewired_Core::Rewired { struct ReInput_ControllerHelper; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_ControllerType.h"
namespace Rewired_Core::Rewired { struct ControllerMap; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };
#include "Rewired_ElementAssignmentConflictCheck.h"
namespace Rewired_Core::Rewired { struct ElementAssignmentConflictCheck; };
namespace Rewired_Core::Rewired { struct JoystickMap; };
namespace Rewired_Core::Rewired { struct KeyboardMap; };
namespace Rewired_Core::Rewired { struct MouseMap; };
namespace Rewired_Core::Rewired { struct CustomControllerMap; };
#include "Rewired_ElementAssignmentConflictInfo.h"
namespace Rewired_Core::Rewired { struct ElementAssignmentConflictInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };

namespace Rewired_Core::Rewired
{
	struct ReInput_ControllerHelper_ConflictCheckingHelper : Rewired_Core::Rewired::Utils::Classes::CodeHelper
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper* PxkTdIkXptwTeWPXwEumaEaSBxt;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper* get_Instance();
		void _ctor();
		bool DoesAnyElementAssignmentConflict();
		bool DoesAnyElementAssignmentConflict(bool skipDisabledMaps);
		bool DoesAnyElementAssignmentConflict(bool skipDisabledMaps, bool forceCheckAllCategories);
		bool DoesAnyElementAssignmentConflict(bool skipDisabledMaps, bool forceCheckAllCategories, bool includeSystemPlayer);
		bool DoesElementAssignmentConflict(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap);
		bool DoesElementAssignmentConflict(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps);
		bool DoesElementAssignmentConflict(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps, bool forceCheckAllCategories);
		bool DoesElementAssignmentConflict(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps, bool forceCheckAllCategories, bool includeSystemPlayer);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps, bool forceCheckAllCategories);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps, bool forceCheckAllCategories, bool includeSystemPlayer);
		bool qEyHSXqzxwdCRyakyiNJCstIWSe(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::JoystickMap* A_3, Rewired_Core::Rewired::ActionElementMap* A_4, bool A_5, bool A_6, bool A_7);
		bool qEyHSXqzxwdCRyakyiNJCstIWSe(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4);
		bool ZqAhaTmksXLWgedDXbBMFnZgkKwj(int32_t A_1, Rewired_Core::Rewired::KeyboardMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5, bool A_6);
		bool ZqAhaTmksXLWgedDXbBMFnZgkKwj(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4);
		bool BLbMNHdPjlwyEskTHeLhwOeCbER(int32_t A_1, Rewired_Core::Rewired::MouseMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5, bool A_6);
		bool BLbMNHdPjlwyEskTHeLhwOeCbER(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4);
		bool iIVvzHiACDGwogQigOXlDswBCERg(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::CustomControllerMap* A_3, Rewired_Core::Rewired::ActionElementMap* A_4, bool A_5, bool A_6, bool A_7);
		bool iIVvzHiACDGwogQigOXlDswBCERg(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps, bool forceCheckAllCategories);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps, bool forceCheckAllCategories, bool includeSystemPlayer);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps, bool forceCheckAllCategories);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps, bool forceCheckAllCategories, bool includeSystemPlayer);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* nSGrxkxZZSIiBINsYzoAbPtsQSB(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::JoystickMap* A_3, Rewired_Core::Rewired::ActionElementMap* A_4, bool A_5, bool A_6, bool A_7);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* nSGrxkxZZSIiBINsYzoAbPtsQSB(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* WOfOeMiJqmUpuJTtLERSZSwsWvI(int32_t A_1, Rewired_Core::Rewired::KeyboardMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5, bool A_6);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* WOfOeMiJqmUpuJTtLERSZSwsWvI(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* pAJiWZFJbvGQQMIfJIlhbIwxwjSo(int32_t A_1, Rewired_Core::Rewired::MouseMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5, bool A_6);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* pAJiWZFJbvGQQMIfJIlhbIwxwjSo(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* MDVLhVrsCjxtreNWPfWmEpMNIeau(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::CustomControllerMap* A_3, Rewired_Core::Rewired::ActionElementMap* A_4, bool A_5, bool A_6, bool A_7);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* MDVLhVrsCjxtreNWPfWmEpMNIeau(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4);
		int32_t RemoveElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap);
		int32_t RemoveElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps);
		int32_t RemoveElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps, bool forceCheckAllCategories);
		int32_t RemoveElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps, bool forceCheckAllCategories, bool includeSystemPlayer);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps, bool forceCheckAllCategories);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps, bool forceCheckAllCategories, bool includeSystemPlayer);
		int32_t APIkwHmAnRCGlKhQkaNRDYfIbvu(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::JoystickMap* A_3, Rewired_Core::Rewired::ActionElementMap* A_4, bool A_5, bool A_6, bool A_7);
		int32_t APIkwHmAnRCGlKhQkaNRDYfIbvu(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4);
		int32_t zJNbwqjMqfzrVlrMwFODPInPgDO(int32_t A_1, Rewired_Core::Rewired::KeyboardMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5, bool A_6);
		int32_t zJNbwqjMqfzrVlrMwFODPInPgDO(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4);
		int32_t PLdBQHKbPXXAXnFhmDGurovkAaa(int32_t A_1, Rewired_Core::Rewired::MouseMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5, bool A_6);
		int32_t PLdBQHKbPXXAXnFhmDGurovkAaa(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4);
		int32_t FDSiLOdcvCdLdXuCtMKcMJlkrEE(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::CustomControllerMap* A_3, Rewired_Core::Rewired::ActionElementMap* A_4, bool A_5, bool A_6, bool A_7);
		int32_t FDSiLOdcvCdLdXuCtMKcMJlkrEE(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4);
		int32_t DisableElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap);
		int32_t DisableElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps);
		int32_t DisableElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps, bool forceCheckAllCategories);
		int32_t DisableElementAssignmentConflicts(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps, bool forceCheckAllCategories, bool includeSystemPlayer);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps, bool forceCheckAllCategories);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps, bool forceCheckAllCategories, bool includeSystemPlayer);
		int32_t cXJzyQrXoKDyVCAqQVlecrSuVNy(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::JoystickMap* A_3, Rewired_Core::Rewired::ActionElementMap* A_4, bool A_5, bool A_6, bool A_7);
		int32_t cXJzyQrXoKDyVCAqQVlecrSuVNy(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4);
		int32_t vMFhTnIyNfGOmmDkahhGxZweSET(int32_t A_1, Rewired_Core::Rewired::KeyboardMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5, bool A_6);
		int32_t vMFhTnIyNfGOmmDkahhGxZweSET(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4);
		int32_t MKXDJFenlghsnWYfhfZmIdCFqogB(int32_t A_1, Rewired_Core::Rewired::MouseMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5, bool A_6);
		int32_t MKXDJFenlghsnWYfhfZmIdCFqogB(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4);
		int32_t RrfkUYEPxXvkMOxTKaRdDcbAQTm(int32_t A_1, int32_t A_2, Rewired_Core::Rewired::CustomControllerMap* A_3, Rewired_Core::Rewired::ActionElementMap* A_4, bool A_5, bool A_6, bool A_7);
		int32_t RrfkUYEPxXvkMOxTKaRdDcbAQTm(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, bool A_4);
	};
}

