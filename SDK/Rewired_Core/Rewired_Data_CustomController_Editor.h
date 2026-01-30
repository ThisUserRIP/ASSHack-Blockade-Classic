#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct ControllerElementIdentifier; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Rewired_Core::Rewired::Data { struct CustomController_Editor_Axis; };
namespace Rewired_Core::Rewired::Data { struct CustomController_Editor_Button; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_ControllerElementType.h"
#include "Rewired_AxisRange.h"
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace Rewired_Core::Rewired::Data { struct CustomController_Editor_Element; };
namespace Rewired_Core::Rewired { struct HardwareControllerMap_Game; };

namespace Rewired_Core::Rewired::Data
{
	struct CustomController_Editor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _name;
		mscorlib::System::String* _descriptiveName;
		int32_t _id;
		mscorlib::System::String* _typeGuidString;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerElementIdentifier>* _elementIdentifiers;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::CustomController_Editor_Axis>* _axes;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::CustomController_Editor_Button>* _buttons;
		int32_t _elementIdentifierIdCounter;
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		mscorlib::System::String* get_descriptiveName();
		void set_descriptiveName(mscorlib::System::String* value);
		int32_t get_id();
		void set_id(int32_t value);
		mscorlib::System::Guid get_typeGuid();
		void set_typeGuid(mscorlib::System::Guid value);
		mscorlib::System::String* get_typeGuidString();
		void set_typeGuidString(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerElementIdentifier>* get_elementIdentifiers();
		void set_elementIdentifiers(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerElementIdentifier>* value);
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::CustomController_Editor_Axis>* get_axes();
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::CustomController_Editor_Button>* get_buttons();
		int32_t get_buttonCount();
		int32_t get_axisCount();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerElementIdentifier>* get_ElementIdentifiers();
		void _ctor();
		void _ctor(Rewired_Core::Rewired::Data::CustomController_Editor* source);
		Rewired_Core::Rewired::Data::CustomController_Editor* Clone();
		IL2CPP::Array<mscorlib::System::String*>* GetElementIdentifierNames();
		IL2CPP::Array<int32_t>* GetElementIdentifierIds();
		IL2CPP::Array<mscorlib::System::String*>* GetElementIdentifierNamesTypeSorted();
		IL2CPP::Array<int32_t>* GetElementIdentifierIdsTypeSorted();
		IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* GetElementIdentifiersTypeSorted();
		bool ContainsElementIdentifier(int32_t id);
		int32_t IndexOfElementIdentifier(int32_t id);
		Rewired_Core::Rewired::ControllerElementIdentifier* GetElementIdentifier(int32_t id);
		Rewired_Core::Rewired::ControllerElementType WJDLAEhiXhDWJatwkzMnhCTZHTLe(int32_t A_1);
		bool MlNDieenpQvdIhRwEVqdLjzAoyJ(int32_t A_1, Rewired_Core::Rewired::AxisRange& A_2);
		IL2CPP::Array<mscorlib::System::String*>* GetButtonNames();
		IL2CPP::Array<int32_t>* GetButtonElementIdentifierIds();
		IL2CPP::Array<mscorlib::System::String*>* GetAxisNames();
		IL2CPP::Array<int32_t>* GetAxisElementIdentifierIds();
		template <typename T> IL2CPP::Array<mscorlib::System::String*>* GetElementNames()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElementNames");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (IL2CPP::Array<mscorlib::System::String*>*)returnValue;
		}
		IL2CPP::Array<mscorlib::System::String*>* GetElementNames(Rewired_Core::Rewired::ControllerElementType type);
		IL2CPP::Array<int32_t>* GetElementElementIdentifierIds(Rewired_Core::Rewired::ControllerElementType type);
		template <typename T> T* GetElement(int32_t index)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElement", std::vector<std::string> { "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&index;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		void AddElement(Rewired_Core::Rewired::ControllerElementType type);
		void AddAxis();
		void AddButton();
		void InsertElement(Rewired_Core::Rewired::ControllerElementType type, int32_t index);
		void InsertAxis(int32_t index);
		void InsertButton(int32_t index);
		void DeleteElement(Rewired_Core::Rewired::ControllerElementType type, int32_t index);
		template <typename T> void DeleteElement(int32_t index)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeleteElement", std::vector<std::string> { "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&index;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		bool ReorderElement(Rewired_Core::Rewired::ControllerElementType type, int32_t index, bool offsetDown, bool offsetNow);
		void DuplicateElement(Rewired_Core::Rewired::ControllerElementType type, int32_t index);
		template <typename T> void tcUplyJKmsmVgHdSOvOeTWSFIfN(int32_t A_1, mscorlib::System::Collections::Generic::List_1<T>* A_2)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "tcUplyJKmsmVgHdSOvOeTWSFIfN");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&A_1;
			params[1] = (intptr_t)A_2;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		Rewired_Core::Rewired::ControllerElementIdentifier* cEenIdiIYZMqSXstjGqHyBmUCRoK(int32_t A_1, mscorlib::System::String* A_2);
		Rewired_Core::Rewired::Data::CustomController_Editor_Element* qsPNjUuOWmRfwuDsruwHhtUiRFN(Rewired_Core::Rewired::ControllerElementType A_1);
		Rewired_Core::Rewired::ControllerElementIdentifier* xWTZIzIoHGMPvZymCfmUNxDjAQX(Rewired_Core::Rewired::ControllerElementType A_1, mscorlib::System::String* A_2, mscorlib::System::String* A_3, mscorlib::System::String* A_4);
		Rewired_Core::Rewired::HardwareControllerMap_Game* ldLHiqOqKKMciKQcqptJxbtNtnY();
	};
}

