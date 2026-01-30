#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_ControllerTemplateElementType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };
namespace Rewired_Core::Rewired { struct IControllerTemplate; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject; };
namespace Rewired_Core::Rewired { struct IControllerTemplateElementSource; };
#include "Rewired_ControllerTemplateElementTarget.h"
namespace Rewired_Core::Rewired { struct ControllerTemplateElementTarget; };

namespace Rewired_Core::Rewired
{
	struct ControllerTemplateActionElementMap : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t OPPOtDNHGlrPGeLpHmQhFxdvEAr;
		Rewired_Core::Rewired::ControllerTemplateElementType NbtEZDJvBiguNErVBFZTyKkBnFrm;
		bool eEGiIPEupbQLDWwJrozxiWefseDw;
		int32_t ROFCtmcpCRLeRZJWhnIzrDqdUrm;
		int32_t ZkhjdNsamAethrqQEpEHRosvTDL;
		struct StaticFields
		{
			int32_t rmscTesiYYTDDZFOSJAYSFKLAdJk;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Rewired_Core::Rewired::ControllerTemplateElementType elementType);
		void _ctor(Rewired_Core::Rewired::ControllerTemplateElementType elementType, int32_t elementIdentifierId, Rewired_Core::Rewired::ActionElementMap* actionElementMap);
		void _ctor(Rewired_Core::Rewired::ControllerTemplateElementType elementType, int32_t elementIdentifierId, int32_t actionId, bool enabled);
		void _ctor(Rewired_Core::Rewired::ActionElementMap* actionElementMap);
		int32_t get_id();
		Rewired_Core::Rewired::ControllerTemplateElementType get_elementType();
		bool get_enabled();
		void set_enabled(bool value);
		int32_t get_actionId();
		void set_actionId(int32_t value);
		int32_t get_elementIdentifierId();
		void set_elementIdentifierId(int32_t value);
		int32_t PAYCjZFKookZbeSCAEuUOwDeqQHV(Rewired_Core::Rewired::IControllerTemplate* A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_2, bool A_3);
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* BTjEytEDmfXDlKCGhgjizVfcbDhc();
		void Export(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* A_1);
		void Import(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* A_1);
		void Clear();
		int32_t CreateAEMsFromSource(Rewired_Core::Rewired::IControllerTemplateElementSource* A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_2, bool A_3);
		int32_t YQLfNimvsVTGUHVqvxrVENCQELy(Rewired_Core::Rewired::IControllerTemplate* A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_2, bool A_3);
		static Rewired_Core::Rewired::ControllerTemplateActionElementMap* zTufJcQfUjAbtihMoqeFKhxXYGv(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* A_0);
		static Rewired_Core::Rewired::ControllerTemplateActionElementMap* zTufJcQfUjAbtihMoqeFKhxXYGv(Rewired_Core::Rewired::ControllerTemplateElementTarget A_0, Rewired_Core::Rewired::ActionElementMap* A_1);
		static Rewired_Core::Rewired::ControllerTemplateActionElementMap* zTufJcQfUjAbtihMoqeFKhxXYGv(Rewired_Core::Rewired::ActionElementMap* A_0);
	};
}

