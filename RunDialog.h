/***************************************************************************
*                                                                          *
*   Copyright (c) 2017                                                     *
*   FastFieldSolvers S.R.L.  http://www.fastfieldsolvers.com               *
*                                                                          *
*   This program is free software; you can redistribute it and/or modify   *
*   it under the terms of the GNU Lesser General Public License (LGPL)     *
*   as published by the Free Software Foundation; either version 2 of      *
*   the License, or (at your option) any later version.                    *
*   for detail see the LICENCE text file.                                  *
*                                                                          *
*   This program is distributed in the hope that it will be useful,        *
*   but WITHOUT ANY WARRANTY; without even the implied warranty of         *
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
*   GNU Library General Public License for more details.                   *
*                                                                          *
*   You should have received a copy of the GNU Library General Public      *
*   License along with this program; if not, write to the Free Software    *
*   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307   *
*   USA                                                                    *
*                                                                          *
***************************************************************************/


#ifndef RUNDIALOG_H
#define RUNDIALOG_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(RunDialog)
	#include <wx/checkbox.h>
	#include <wx/dialog.h>
	#include <wx/sizer.h>
	#include <wx/button.h>
	#include <wx/panel.h>
	#include <wx/stattext.h>
	#include <wx/textctrl.h>
	//*)
#endif
//(*Headers(RunDialog)
//*)

// for CAutoRefGlobalVars
#include "Solver/SolverGlobal.h"

class RunDialog: public wxDialog
{
	public:

		RunDialog(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~RunDialog();

        CAutoRefGlobalVars GetGlobalVars();
        void SetGlobalVarsFileIn(std::string fileIn);

		//(*Declarations(RunDialog)
		wxCheckBox* CheckBox_Dump_Residual;
		wxCheckBox* CheckBox_Precond_Jacobi;
		wxPanel* Panel1;
		wxCheckBox* CheckBox_Precond_TwoLevels;
		wxTextCtrl* TextCtrl_MeshEps;
		wxButton* Button_BrowseInputFile;
		wxCheckBox* CheckBox_AutoSettings;
		wxCheckBox* CheckBox_Dump_Time_Mem;
		wxTextCtrl* TextCtrl_EPS_Ratio;
		wxTextCtrl* TextCtrl_Autorefine_Out_of_Core;
		wxStaticText* StaticText1;
		wxCheckBox* CheckBox_GalerkinScheme;
		wxTextCtrl* TextCtrl_Dim_Precond_Two_Levels;
		wxStaticText* StaticText3;
		wxCheckBox* CheckBox_Output_Geometry;
		wxTextCtrl* TextCtrl_GmresTol;
		wxCheckBox* CheckBox_Auto_Precond;
		wxStaticText* StaticText8;
		wxStaticText* StaticText7;
		wxCheckBox* CheckBox_Verbose_Output;
		wxStaticText* StaticText4;
		wxTextCtrl* TextCtrl_Automatic_Error;
		wxStaticText* StaticText5;
		wxStaticText* StaticText2;
		wxTextCtrl* TextCtrl_InputFileName;
		wxStaticText* StaticText6;
		wxTextCtrl* TextCtrl_Curvature;
		wxCheckBox* CheckBox_Output_Charge;
		//*)

        wxString m_strSamplePath;

	protected:

		//(*Identifiers(RunDialog)
		static const long ID_STATICTEXT1;
		static const long ID_INPUT_FILE_NAME;
		static const long ID_BROWSE_INPUT_FILE;
		static const long ID_AUTO_SETTINGS;
		static const long ID_STATICTEXT2;
		static const long ID_AUTOMATIC_ERROR;
		static const long ID_AUTO_PRECOND;
		static const long ID_STATICTEXT7;
		static const long ID_MESH_EPS;
		static const long ID_STATICTEXT8;
		static const long ID_GMRES_TOL;
		static const long ID_STATICTEXT3;
		static const long ID_EPS_RATIO;
		static const long ID_STATICTEXT4;
		static const long ID_CURVATURE;
		static const long ID_STATICTEXT5;
		static const long ID_AUTOREFINE_OUT_OF_CORE;
		static const long ID_GALERKIN_SCHEME;
		static const long ID_PRECOND_JACOBI;
		static const long ID_PRECOND_TWO_LEVELS;
		static const long ID_STATICTEXT6;
		static const long ID_DIM_PRECOND_TWO_LEVELS;
		static const long ID_OUTPUT_GEOMETRY;
		static const long ID_DUMP_RESIDUAL;
		static const long ID_OUTPUT_CHARGE;
		static const long ID_DUMP_TIME_MEM;
		static const long ID_VERBOSE_OUTPUT;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(RunDialog)
		void OnButton_BrowseInputFileClick(wxCommandEvent& event);
		//*)

    // Implementation
    protected:
        void OnReset(wxCommandEvent& event);
        void CopyVarsToDialog();
        void CopyDialogToVars();
        void Reset();

        CAutoRefGlobalVars m_clsGlobalVars;

		DECLARE_EVENT_TABLE()
};

#endif
