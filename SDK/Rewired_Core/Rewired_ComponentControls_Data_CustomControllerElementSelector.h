#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_ComponentControls_Data_CustomControllerElementSelector_ElementType.h"
#include "Rewired_ComponentControls_Data_CustomControllerElementSelector_SelectorType.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct CustomController; };
namespace Rewired_Core::Rewired { struct ControllerElementIdentifier; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };

namespace Rewired_Core::Rewired::ComponentControls::Data
{
	struct CustomControllerElementSelector : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType _elementType;
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType _selectorType;
		mscorlib::System::String* _elementName;
		int32_t _elementIndex;
		int32_t _elementId;
		int32_t tGEtsfdFqwxZsevHHPNUBUfpOWX;
		int32_t xDPFRZkAaZwEYJMrZfPDoGHvlcEB;
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType get_elementType();
		void set_elementType(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType value);
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType get_selectorType();
		void set_selectorType(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector_SelectorType value);
		mscorlib::System::String* get_elementName();
		void set_elementName(mscorlib::System::String* value);
		int32_t get_elementIndex();
		void set_elementIndex(int32_t value);
		int32_t get_elementId();
		void set_elementId(int32_t value);
		bool get_isAssigned();
		int32_t GetElementIndex(Rewired_Core::Rewired::CustomController* customController);
		mscorlib::System::String* GetSelectorFormattedString();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerElementIdentifier>* wqEfeJBYfsJklaXHjDcQYqgdTFmu(Rewired_Core::Rewired::CustomController* A_1, Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector_ElementType A_2);
		void ClearCache();
		void _ctor();
	};
}

