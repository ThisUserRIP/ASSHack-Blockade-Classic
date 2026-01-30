#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Utils_Classes_CodeHelper.h"
#include "Rewired_Player_ControllerHelper.h"
namespace Rewired_Core::Rewired { struct Player_ControllerHelper; };
namespace Rewired_Core::Rewired { struct Player; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_ControllerType.h"
namespace Rewired_Core::Rewired { struct ControllerMap; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };
#include "Rewired_ElementAssignmentConflictCheck.h"
namespace Rewired_Core::Rewired { struct ElementAssignmentConflictCheck; };
#include "Rewired_ElementAssignmentConflictInfo.h"
namespace Rewired_Core::Rewired { struct ElementAssignmentConflictInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace Rewired_Core::Rewired { struct JoystickMap; };
namespace Rewired_Core::Rewired { struct KeyboardMap; };
namespace Rewired_Core::Rewired { struct MouseMap; };
namespace Rewired_Core::Rewired { struct CustomControllerMap; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace Rewired_Core { template <typename T> struct vhWAChkQtfbJbONWUAQVROGQdlbD; };
namespace Rewired_Core::Rewired { struct InputMapCategory; };

namespace Rewired_Core::Rewired
{
	struct Player_ControllerHelper_ConflictCheckingHelper : Rewired_Core::Rewired::Utils::Classes::CodeHelper
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Player* HhyEsCLrtcDWZIsHkrLgznfvXFy;
		Rewired_Core::Rewired::Player_ControllerHelper* twIWFTWbDLyQHeCkvFyegiKwlQTa;
		int32_t CegCZCxKXWIRHZSULEYHhSHkAZS;
		void _ctor(Rewired_Core::Rewired::Player* player, Rewired_Core::Rewired::Player_ControllerHelper* parent);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, bool skipDisabledMaps);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, bool skipDisabledMaps, bool forceCheckAllCategories);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps, bool forceCheckAllCategories);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps);
		bool DoesElementAssignmentConflict(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps, bool forceCheckAllCategories);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, bool skipDisabledMaps, bool forceCheckAllCategories);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps, bool forceCheckAllCategories);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps, bool forceCheckAllCategories);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, bool skipRemovedMaps);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, bool skipRemovedMaps, bool forceCheckAllCategories);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipRemovedMaps);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipRemovedMaps, bool forceCheckAllCategories);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipRemovedMaps);
		int32_t RemoveElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipRemovedMaps, bool forceCheckAllCategories);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, bool skipDisabledMaps);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, bool skipDisabledMaps, bool forceCheckAllCategories);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* elementMap, bool skipDisabledMaps, bool forceCheckAllCategories);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps);
		int32_t DisableElementAssignmentConflicts(Rewired_Core::Rewired::ElementAssignmentConflictCheck conflictCheck, bool skipDisabledMaps, bool forceCheckAllCategories);
		bool qEyHSXqzxwdCRyakyiNJCstIWSe(int32_t A_1, Rewired_Core::Rewired::JoystickMap* A_2, bool A_3, bool A_4);
		bool qEyHSXqzxwdCRyakyiNJCstIWSe(int32_t A_1, Rewired_Core::Rewired::JoystickMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5);
		bool qEyHSXqzxwdCRyakyiNJCstIWSe(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3);
		bool ZqAhaTmksXLWgedDXbBMFnZgkKwj(Rewired_Core::Rewired::KeyboardMap* A_1, bool A_2, bool A_3);
		bool ZqAhaTmksXLWgedDXbBMFnZgkKwj(Rewired_Core::Rewired::KeyboardMap* A_1, Rewired_Core::Rewired::ActionElementMap* A_2, bool A_3, bool A_4);
		bool ZqAhaTmksXLWgedDXbBMFnZgkKwj(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3);
		bool BLbMNHdPjlwyEskTHeLhwOeCbER(Rewired_Core::Rewired::MouseMap* A_1, bool A_2, bool A_3);
		bool BLbMNHdPjlwyEskTHeLhwOeCbER(Rewired_Core::Rewired::MouseMap* A_1, Rewired_Core::Rewired::ActionElementMap* A_2, bool A_3, bool A_4);
		bool BLbMNHdPjlwyEskTHeLhwOeCbER(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3);
		bool iIVvzHiACDGwogQigOXlDswBCERg(int32_t A_1, Rewired_Core::Rewired::CustomControllerMap* A_2, bool A_3, bool A_4);
		bool iIVvzHiACDGwogQigOXlDswBCERg(int32_t A_1, Rewired_Core::Rewired::CustomControllerMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5);
		bool iIVvzHiACDGwogQigOXlDswBCERg(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* nSGrxkxZZSIiBINsYzoAbPtsQSB(int32_t A_1, Rewired_Core::Rewired::JoystickMap* A_2, bool A_3, bool A_4);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* nSGrxkxZZSIiBINsYzoAbPtsQSB(int32_t A_1, Rewired_Core::Rewired::JoystickMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* nSGrxkxZZSIiBINsYzoAbPtsQSB(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* WOfOeMiJqmUpuJTtLERSZSwsWvI(Rewired_Core::Rewired::KeyboardMap* A_1, bool A_2, bool A_3);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* WOfOeMiJqmUpuJTtLERSZSwsWvI(Rewired_Core::Rewired::KeyboardMap* A_1, Rewired_Core::Rewired::ActionElementMap* A_2, bool A_3, bool A_4);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* WOfOeMiJqmUpuJTtLERSZSwsWvI(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* pAJiWZFJbvGQQMIfJIlhbIwxwjSo(Rewired_Core::Rewired::MouseMap* A_1, bool A_2, bool A_3);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* pAJiWZFJbvGQQMIfJIlhbIwxwjSo(Rewired_Core::Rewired::MouseMap* A_1, Rewired_Core::Rewired::ActionElementMap* A_2, bool A_3, bool A_4);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* pAJiWZFJbvGQQMIfJIlhbIwxwjSo(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* MDVLhVrsCjxtreNWPfWmEpMNIeau(int32_t A_1, Rewired_Core::Rewired::CustomControllerMap* A_2, bool A_3, bool A_4);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* MDVLhVrsCjxtreNWPfWmEpMNIeau(int32_t A_1, Rewired_Core::Rewired::CustomControllerMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* MDVLhVrsCjxtreNWPfWmEpMNIeau(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3);
		int32_t APIkwHmAnRCGlKhQkaNRDYfIbvu(int32_t A_1, Rewired_Core::Rewired::JoystickMap* A_2, bool A_3, bool A_4);
		int32_t APIkwHmAnRCGlKhQkaNRDYfIbvu(int32_t A_1, Rewired_Core::Rewired::JoystickMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5);
		int32_t APIkwHmAnRCGlKhQkaNRDYfIbvu(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3);
		int32_t zJNbwqjMqfzrVlrMwFODPInPgDO(Rewired_Core::Rewired::KeyboardMap* A_1, bool A_2, bool A_3);
		int32_t zJNbwqjMqfzrVlrMwFODPInPgDO(Rewired_Core::Rewired::KeyboardMap* A_1, Rewired_Core::Rewired::ActionElementMap* A_2, bool A_3, bool A_4);
		int32_t zJNbwqjMqfzrVlrMwFODPInPgDO(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3);
		int32_t PLdBQHKbPXXAXnFhmDGurovkAaa(Rewired_Core::Rewired::MouseMap* A_1, bool A_2, bool A_3);
		int32_t PLdBQHKbPXXAXnFhmDGurovkAaa(Rewired_Core::Rewired::MouseMap* A_1, Rewired_Core::Rewired::ActionElementMap* A_2, bool A_3, bool A_4);
		int32_t PLdBQHKbPXXAXnFhmDGurovkAaa(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3);
		int32_t FDSiLOdcvCdLdXuCtMKcMJlkrEE(int32_t A_1, Rewired_Core::Rewired::CustomControllerMap* A_2, bool A_3, bool A_4);
		int32_t FDSiLOdcvCdLdXuCtMKcMJlkrEE(int32_t A_1, Rewired_Core::Rewired::CustomControllerMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5);
		int32_t FDSiLOdcvCdLdXuCtMKcMJlkrEE(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3);
		int32_t cXJzyQrXoKDyVCAqQVlecrSuVNy(int32_t A_1, Rewired_Core::Rewired::JoystickMap* A_2, bool A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5);
		int32_t cXJzyQrXoKDyVCAqQVlecrSuVNy(int32_t A_1, Rewired_Core::Rewired::JoystickMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_6);
		int32_t cXJzyQrXoKDyVCAqQVlecrSuVNy(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_4);
		int32_t vMFhTnIyNfGOmmDkahhGxZweSET(Rewired_Core::Rewired::KeyboardMap* A_1, bool A_2, bool A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_4);
		int32_t vMFhTnIyNfGOmmDkahhGxZweSET(Rewired_Core::Rewired::KeyboardMap* A_1, Rewired_Core::Rewired::ActionElementMap* A_2, bool A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5);
		int32_t vMFhTnIyNfGOmmDkahhGxZweSET(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_4);
		int32_t MKXDJFenlghsnWYfhfZmIdCFqogB(Rewired_Core::Rewired::MouseMap* A_1, bool A_2, bool A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_4);
		int32_t MKXDJFenlghsnWYfhfZmIdCFqogB(Rewired_Core::Rewired::MouseMap* A_1, Rewired_Core::Rewired::ActionElementMap* A_2, bool A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5);
		int32_t MKXDJFenlghsnWYfhfZmIdCFqogB(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_4);
		int32_t RrfkUYEPxXvkMOxTKaRdDcbAQTm(int32_t A_1, Rewired_Core::Rewired::CustomControllerMap* A_2, bool A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5);
		int32_t RrfkUYEPxXvkMOxTKaRdDcbAQTm(int32_t A_1, Rewired_Core::Rewired::CustomControllerMap* A_2, Rewired_Core::Rewired::ActionElementMap* A_3, bool A_4, bool A_5, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_6);
		int32_t RrfkUYEPxXvkMOxTKaRdDcbAQTm(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_4);
		template <typename T> bool CzcujywlCbBGKCdPqpOOfYznAgI(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, T* A_3, bool A_4, bool A_5, Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<T>* A_6)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CzcujywlCbBGKCdPqpOOfYznAgI");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[6];
			params[0] = (intptr_t)&A_1;
			params[1] = (intptr_t)&A_2;
			params[2] = (intptr_t)A_3;
			params[3] = (intptr_t)&A_4;
			params[4] = (intptr_t)&A_5;
			params[5] = (intptr_t)A_6;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
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
		template <typename T> bool CzcujywlCbBGKCdPqpOOfYznAgI(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, T* A_3, Rewired_Core::Rewired::ActionElementMap* A_4, bool A_5, bool A_6, Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<T>* A_7)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CzcujywlCbBGKCdPqpOOfYznAgI");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[7];
			params[0] = (intptr_t)&A_1;
			params[1] = (intptr_t)&A_2;
			params[2] = (intptr_t)A_3;
			params[3] = (intptr_t)A_4;
			params[4] = (intptr_t)&A_5;
			params[5] = (intptr_t)&A_6;
			params[6] = (intptr_t)A_7;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
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
		template <typename T> bool CzcujywlCbBGKCdPqpOOfYznAgI(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<T>* A_4)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CzcujywlCbBGKCdPqpOOfYznAgI");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)&A_1;
			params[1] = (intptr_t)&A_2;
			params[2] = (intptr_t)&A_3;
			params[3] = (intptr_t)A_4;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
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
		template <typename T> mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* yAaDpejmvIpObjuMEeBbFIdfzpBg(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, T* A_3, bool A_4, bool A_5, Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<T>* A_6)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "yAaDpejmvIpObjuMEeBbFIdfzpBg");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[6];
			params[0] = (intptr_t)&A_1;
			params[1] = (intptr_t)&A_2;
			params[2] = (intptr_t)A_3;
			params[3] = (intptr_t)&A_4;
			params[4] = (intptr_t)&A_5;
			params[5] = (intptr_t)A_6;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
		}
		template <typename T> mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* yAaDpejmvIpObjuMEeBbFIdfzpBg(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, T* A_3, Rewired_Core::Rewired::ActionElementMap* A_4, bool A_5, bool A_6, Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<T>* A_7)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "yAaDpejmvIpObjuMEeBbFIdfzpBg");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[7];
			params[0] = (intptr_t)&A_1;
			params[1] = (intptr_t)&A_2;
			params[2] = (intptr_t)A_3;
			params[3] = (intptr_t)A_4;
			params[4] = (intptr_t)&A_5;
			params[5] = (intptr_t)&A_6;
			params[6] = (intptr_t)A_7;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
		}
		template <typename T> mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* yAaDpejmvIpObjuMEeBbFIdfzpBg(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<T>* A_4)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "yAaDpejmvIpObjuMEeBbFIdfzpBg");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)&A_1;
			params[1] = (intptr_t)&A_2;
			params[2] = (intptr_t)&A_3;
			params[3] = (intptr_t)A_4;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
		}
		template <typename T> int32_t dfsemqnklcrcHbWcKazfohEHURQ(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, T* A_3, bool A_4, bool A_5, Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<T>* A_6)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "dfsemqnklcrcHbWcKazfohEHURQ");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[6];
			params[0] = (intptr_t)&A_1;
			params[1] = (intptr_t)&A_2;
			params[2] = (intptr_t)A_3;
			params[3] = (intptr_t)&A_4;
			params[4] = (intptr_t)&A_5;
			params[5] = (intptr_t)A_6;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
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
		template <typename T> int32_t dfsemqnklcrcHbWcKazfohEHURQ(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, T* A_3, Rewired_Core::Rewired::ActionElementMap* A_4, bool A_5, bool A_6, Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<T>* A_7)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "dfsemqnklcrcHbWcKazfohEHURQ");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[7];
			params[0] = (intptr_t)&A_1;
			params[1] = (intptr_t)&A_2;
			params[2] = (intptr_t)A_3;
			params[3] = (intptr_t)A_4;
			params[4] = (intptr_t)&A_5;
			params[5] = (intptr_t)&A_6;
			params[6] = (intptr_t)A_7;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
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
		template <typename T> int32_t dfsemqnklcrcHbWcKazfohEHURQ(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<T>* A_4)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "dfsemqnklcrcHbWcKazfohEHURQ");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)&A_1;
			params[1] = (intptr_t)&A_2;
			params[2] = (intptr_t)&A_3;
			params[3] = (intptr_t)A_4;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
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
		template <typename T> int32_t zhCGIxDozTzUzqMGXQWdjnwekOW(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, T* A_3, bool A_4, bool A_5, Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<T>* A_6, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_7)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zhCGIxDozTzUzqMGXQWdjnwekOW", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", GetGenericTypeName<T>(), "System.Boolean", "System.Boolean", "vhWAChkQtfbJbONWUAQVROGQdlbD<T>", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[7];
			params[0] = (intptr_t)&A_1;
			params[1] = (intptr_t)&A_2;
			params[2] = (intptr_t)A_3;
			params[3] = (intptr_t)&A_4;
			params[4] = (intptr_t)&A_5;
			params[5] = (intptr_t)A_6;
			params[6] = (intptr_t)A_7;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
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
		template <typename T> int32_t zhCGIxDozTzUzqMGXQWdjnwekOW(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, T* A_3, Rewired_Core::Rewired::ActionElementMap* A_4, bool A_5, bool A_6, Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<T>* A_7, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_8)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zhCGIxDozTzUzqMGXQWdjnwekOW", std::vector<std::string> { "Rewired.ControllerType", "System.Int32", GetGenericTypeName<T>(), "Rewired.ActionElementMap", "System.Boolean", "System.Boolean", "vhWAChkQtfbJbONWUAQVROGQdlbD<T>", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[8];
			params[0] = (intptr_t)&A_1;
			params[1] = (intptr_t)&A_2;
			params[2] = (intptr_t)A_3;
			params[3] = (intptr_t)A_4;
			params[4] = (intptr_t)&A_5;
			params[5] = (intptr_t)&A_6;
			params[6] = (intptr_t)A_7;
			params[7] = (intptr_t)A_8;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
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
		template <typename T> int32_t zhCGIxDozTzUzqMGXQWdjnwekOW(Rewired_Core::Rewired::ElementAssignmentConflictCheck A_1, bool A_2, bool A_3, Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<T>* A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zhCGIxDozTzUzqMGXQWdjnwekOW", std::vector<std::string> { "Rewired.ElementAssignmentConflictCheck", "System.Boolean", "System.Boolean", "vhWAChkQtfbJbONWUAQVROGQdlbD<T>", "System.Collections.Generic.List`1<Rewired.ActionElementMap>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[5];
			params[0] = (intptr_t)&A_1;
			params[1] = (intptr_t)&A_2;
			params[2] = (intptr_t)&A_3;
			params[3] = (intptr_t)A_4;
			params[4] = (intptr_t)A_5;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
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
		bool xWdKPXtfaGMTrPyPXtrgepvUAyz(Rewired_Core::Rewired::InputMapCategory* A_1, Rewired_Core::Rewired::ControllerMap* A_2);
	};
}

