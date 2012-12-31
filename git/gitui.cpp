//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "gitui.h"


// Declare the bitmap loading function
extern void wxCrafterpca4kKInitBitmapResources();

static bool bBitmapLoaded = false;


GitSettingsDlgBase::GitSettingsDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterpca4kKInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(mainSizer);
    
    wxStaticBoxSizer* staticBoxSizer78 = new wxStaticBoxSizer( new wxStaticBox(this, wxID_ANY, _("Files:")), wxVERTICAL);
    
    mainSizer->Add(staticBoxSizer78, 0, wxALL|wxEXPAND, 5);
    
    wxFlexGridSizer* fgSizer11 = new wxFlexGridSizer(  0, 2, 0, 0);
    fgSizer11->SetFlexibleDirection( wxBOTH );
    fgSizer11->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    fgSizer11->AddGrowableCol(1);
    
    staticBoxSizer78->Add(fgSizer11, 0, wxALL|wxEXPAND, 5);
    
    m_staticText42 = new wxStaticText(this, wxID_ANY, _("Path to git executable:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer11->Add(m_staticText42, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_pathGIT = new wxFilePickerCtrl(this, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*"), wxDefaultPosition, wxSize(-1, -1), wxFLP_DEFAULT_STYLE);
    
    fgSizer11->Add(m_pathGIT, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);
    
    m_staticText54 = new wxStaticText(this, wxID_ANY, _("Path to gitk executable:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer11->Add(m_staticText54, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_pathGITK = new wxFilePickerCtrl(this, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*"), wxDefaultPosition, wxSize(-1, -1), wxFLP_DEFAULT_STYLE);
    
    fgSizer11->Add(m_pathGITK, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);
    
    wxStaticBoxSizer* staticBoxSizer85 = new wxStaticBoxSizer( new wxStaticBox(this, wxID_ANY, _("Options")), wxVERTICAL);
    
    mainSizer->Add(staticBoxSizer85, 0, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* boxSizer766 = new wxBoxSizer(wxVERTICAL);
    
    staticBoxSizer85->Add(boxSizer766, 0, wxALL, 5);
    
    m_checkBoxTerminal = new wxCheckBox(this, wxID_ANY, _("Show Terminal"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_checkBoxTerminal->SetValue(false);
    m_checkBoxTerminal->SetToolTip(_("Mainly useful for Windows when the password\nprompt is not accessible via the UI"));
    
    boxSizer766->Add(m_checkBoxTerminal, 0, wxALL, 5);
    
    m_checkBoxLog = new wxCheckBox(this, wxID_ANY, _("Verbose Logging"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_checkBoxLog->SetValue(false);
    m_checkBoxLog->SetToolTip(_("Tick this option to enable a verbose logging of git"));
    
    boxSizer766->Add(m_checkBoxLog, 0, wxALL, 5);
    
    mainSizer->Add(0, 0, 1, wxALL, 5);
    
    wxBoxSizer* bSizer3 = new wxBoxSizer(wxHORIZONTAL);
    
    mainSizer->Add(bSizer3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_buttonOk = new wxButton(this, wxID_OK, _("&OK"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonOk->SetDefault();
    
    bSizer3->Add(m_buttonOk, 0, wxALL, 5);
    
    m_buttonCancel = new wxButton(this, wxID_CANCEL, _("Cancel"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer3->Add(m_buttonCancel, 0, wxALL, 5);
    
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_buttonOk->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(GitSettingsDlgBase::OnOK), NULL, this);
    
}

GitSettingsDlgBase::~GitSettingsDlgBase()
{
    m_buttonOk->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(GitSettingsDlgBase::OnOK), NULL, this);
    
}

GitCommitDlgBase::GitCommitDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterpca4kKInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* bSizer4 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizer4);
    
    m_splitter2 = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxSP_LIVE_UPDATE|wxSP_3DSASH);
    m_splitter2->SetSashGravity(0.500000);
    m_splitter2->SetMinimumPaneSize(0);
    
    bSizer4->Add(m_splitter2, 1, wxALL|wxEXPAND, 5);
    
    m_panel3 = new wxPanel(m_splitter2, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxTAB_TRAVERSAL);
    
    wxBoxSizer* bSizer12 = new wxBoxSizer(wxVERTICAL);
    m_panel3->SetSizer(bSizer12);
    
    m_splitter1 = new wxSplitterWindow(m_panel3, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxSP_LIVE_UPDATE|wxSP_3DSASH);
    m_splitter1->SetSashGravity(0.500000);
    m_splitter1->SetMinimumPaneSize(0);
    
    bSizer12->Add(m_splitter1, 1, wxEXPAND, 5);
    
    m_panel1 = new wxPanel(m_splitter1, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxTAB_TRAVERSAL);
    
    wxBoxSizer* bSizer11 = new wxBoxSizer(wxVERTICAL);
    m_panel1->SetSizer(bSizer11);
    
    m_staticText6 = new wxStaticText(m_panel1, wxID_ANY, _("Modified paths:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer11->Add(m_staticText6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    wxArrayString m_listBoxArr;
    m_listBox = new wxCheckListBox(m_panel1, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), m_listBoxArr, wxLB_SINGLE);
    
    bSizer11->Add(m_listBox, 1, wxALL|wxEXPAND, 5);
    
    m_panel2 = new wxPanel(m_splitter1, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxTAB_TRAVERSAL);
    m_splitter1->SplitVertically(m_panel1, m_panel2, 0);
    
    wxBoxSizer* bSizer9 = new wxBoxSizer(wxVERTICAL);
    m_panel2->SetSizer(bSizer9);
    
    m_staticText7 = new wxStaticText(m_panel2, wxID_ANY, _("Diff:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer9->Add(m_staticText7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_editor = new GitCommitEditor( m_panel2 );
    bSizer9->Add(m_editor, 1, wxALL|wxEXPAND, 5);
    
    m_panel4 = new wxPanel(m_splitter2, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxTAB_TRAVERSAL);
    m_splitter2->SplitHorizontally(m_panel3, m_panel4, 0);
    
    wxBoxSizer* bSizer13 = new wxBoxSizer(wxVERTICAL);
    m_panel4->SetSizer(bSizer13);
    
    m_staticText8 = new wxStaticText(m_panel4, wxID_ANY, _("Commit message:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer13->Add(m_staticText8, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_commitMessage = new wxTextCtrl(m_panel4, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), wxTE_WORDWRAP|wxTE_RICH2|wxTE_MULTILINE);
    wxFont m_commitMessageFont(10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Sans"));
    m_commitMessage->SetFont(m_commitMessageFont);
    
    bSizer13->Add(m_commitMessage, 1, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* bSizer5 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer4->Add(bSizer5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_button5 = new wxButton(this, wxID_OK, _("&OK"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_button5->SetDefault();
    
    bSizer5->Add(m_button5, 0, wxALL, 5);
    
    m_button6 = new wxButton(this, wxID_CANCEL, _("Cancel"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer5->Add(m_button6, 0, wxALL, 5);
    
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_listBox->Connect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(GitCommitDlgBase::OnChangeFile), NULL, this);
    m_button5->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(GitCommitDlgBase::OnCommitOK), NULL, this);
    
}

GitCommitDlgBase::~GitCommitDlgBase()
{
    m_listBox->Disconnect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(GitCommitDlgBase::OnChangeFile), NULL, this);
    m_button5->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(GitCommitDlgBase::OnCommitOK), NULL, this);
    
}

GitCommitListDlgBase::GitCommitListDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterpca4kKInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* bSizer17 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizer17);
    
    wxStaticBoxSizer* sbSizer1 = new wxStaticBoxSizer( new wxStaticBox(this, wxID_ANY, _("Commit List")), wxVERTICAL);
    
    bSizer17->Add(sbSizer1, 1, wxALL|wxEXPAND, 5);
    
    m_commitListBox = new wxListCtrl(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxLC_VRULES|wxLC_HRULES|wxLC_REPORT);
    
    sbSizer1->Add(m_commitListBox, 1, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* bSizer18 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer17->Add(bSizer18, 2, wxEXPAND, 5);
    
    wxStaticBoxSizer* sbSizer3 = new wxStaticBoxSizer( new wxStaticBox(this, wxID_ANY, _("Modified files")), wxVERTICAL);
    
    bSizer18->Add(sbSizer3, 1, wxALL|wxEXPAND, 5);
    
    wxArrayString m_fileListBoxArr;
    m_fileListBox = new wxListBox(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), m_fileListBoxArr, 0);
    
    sbSizer3->Add(m_fileListBox, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5);
    
    wxStaticBoxSizer* sbSizer5 = new wxStaticBoxSizer( new wxStaticBox(this, wxID_ANY, _("Diff")), wxVERTICAL);
    
    bSizer18->Add(sbSizer5, 2, wxALL|wxEXPAND, 5);
    
    m_editor = new GitCommitEditor( this );
    sbSizer5->Add(m_editor, 1, wxALL|wxEXPAND, 5);
    
    wxStaticBoxSizer* sbSizer2 = new wxStaticBoxSizer( new wxStaticBox(this, wxID_ANY, _("Commit Message")), wxVERTICAL);
    
    bSizer17->Add(sbSizer2, 1, wxALL|wxEXPAND, 5);
    
    m_commitMessage = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), wxTE_RICH2|wxTE_MULTILINE);
    
    sbSizer2->Add(m_commitMessage, 1, wxALL|wxEXPAND, 5);
    
    m_staticline4 = new wxStaticLine(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxLI_HORIZONTAL);
    
    bSizer17->Add(m_staticline4, 0, wxALL|wxEXPAND, 5);
    
    m_sdbSizer1 = new wxStdDialogButtonSizer();
    
    bSizer17->Add(m_sdbSizer1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_button136 = new wxButton(this, wxID_OK, _(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_button136->SetDefault();
    m_sdbSizer1->AddButton(m_button136);
    m_sdbSizer1->Realize();
    
    
    SetSizeHints(879,600);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_commitListBox->Connect(wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler(GitCommitListDlgBase::OnChangeCommit), NULL, this);
    m_fileListBox->Connect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(GitCommitListDlgBase::OnChangeFile), NULL, this);
    
}

GitCommitListDlgBase::~GitCommitListDlgBase()
{
    m_commitListBox->Disconnect(wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler(GitCommitListDlgBase::OnChangeCommit), NULL, this);
    m_fileListBox->Disconnect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(GitCommitListDlgBase::OnChangeFile), NULL, this);
    
}

GitDiffDlgBase::GitDiffDlgBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterpca4kKInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* bSizer17 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizer17);
    
    m_splitter = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxSP_LIVE_UPDATE);
    m_splitter->SetSashGravity(0.500000);
    m_splitter->SetMinimumPaneSize(10);
    
    bSizer17->Add(m_splitter, 1, wxALL|wxEXPAND, 5);
    
    m_splitterPageFiles = new wxPanel(m_splitter, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    
    wxBoxSizer* boxSizer62 = new wxBoxSizer(wxVERTICAL);
    m_splitterPageFiles->SetSizer(boxSizer62);
    
    m_staticText68 = new wxStaticText(m_splitterPageFiles, wxID_ANY, _("Modified files:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer62->Add(m_staticText68, 0, wxALL|wxALIGN_BOTTOM, 5);
    
    wxArrayString m_fileListBoxArr;
    m_fileListBox = new wxListBox(m_splitterPageFiles, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), m_fileListBoxArr, 0);
    
    boxSizer62->Add(m_fileListBox, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 5);
    
    m_splitterPageDiff = new wxPanel(m_splitter, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_splitter->SplitVertically(m_splitterPageFiles, m_splitterPageDiff, 0);
    
    wxBoxSizer* boxSizer64 = new wxBoxSizer(wxVERTICAL);
    m_splitterPageDiff->SetSizer(boxSizer64);
    
    m_staticText66 = new wxStaticText(m_splitterPageDiff, wxID_ANY, _("Diff:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer64->Add(m_staticText66, 0, wxALL|wxALIGN_BOTTOM, 5);
    
    m_editor = new GitCommitEditor( m_splitterPageDiff );
    boxSizer64->Add(m_editor, 1, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 5);
    
    m_sdbSizer1 = new wxStdDialogButtonSizer();
    
    bSizer17->Add(m_sdbSizer1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_button145 = new wxButton(this, wxID_OK, _(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_button145->SetDefault();
    m_sdbSizer1->AddButton(m_button145);
    m_sdbSizer1->Realize();
    
    
    SetSizeHints(879,600);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_fileListBox->Connect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(GitDiffDlgBase::OnChangeFile), NULL, this);
    
}

GitDiffDlgBase::~GitDiffDlgBase()
{
    m_fileListBox->Disconnect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(GitDiffDlgBase::OnChangeFile), NULL, this);
    
}

GitImages::GitImages()
    : wxImageList(16, 16, true)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterpca4kKInitBitmapResources();
        bBitmapLoaded = true;
    }
    wxBitmap bmp;
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("gitCommitLocal"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("gitCommitLocal"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("gitArrowUp"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("gitArrowUp"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("gitSwitchLocalBranch"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("gitSwitchLocalBranch"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("gitNewBranch"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("gitNewBranch"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("gitDiffs"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("gitDiffs"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("gitCommitedFiles"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("gitCommitedFiles"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("gitModifiedFiles"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("gitModifiedFiles"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("gitPull"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("gitPull"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("gitPush"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("gitPush"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("gitReset"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("gitReset"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("gitResetRepo"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("gitResetRepo"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("gitTrash"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("gitTrash"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("gitRefresh"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("gitRefresh"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("gitStart"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("gitStart"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("gitFileAdd"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("gitFileAdd"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("gitClone"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("gitClone"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("git"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("git"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("gitPath"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("gitPath"), bmp ) );
    
    bmp = wxXmlResource::Get()->LoadBitmap(wxT("gitSettings"));
    this->Add( bmp );
    m_bitmaps.insert( std::make_pair(wxT("gitSettings"), bmp ) );
    
    
}

GitImages::~GitImages()
{
}

gitCloneDlgBaseClass::gitCloneDlgBaseClass(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterpca4kKInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer17 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer17);
    
    wxFlexGridSizer* flexGridSizer21 = new wxFlexGridSizer(  0, 2, 0, 0);
    flexGridSizer21->SetFlexibleDirection( wxBOTH );
    flexGridSizer21->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer21->AddGrowableCol(1);
    
    boxSizer17->Add(flexGridSizer21, 1, wxALL|wxEXPAND, 5);
    
    m_staticText22 = new wxStaticText(this, wxID_ANY, _("Clone URL:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer21->Add(m_staticText22, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_textCtrlURL = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    m_textCtrlURL->SetToolTip(_("git URL to clone"));
    
    flexGridSizer21->Add(m_textCtrlURL, 0, wxALL|wxEXPAND, 5);
    
    m_staticText24 = new wxStaticText(this, wxID_ANY, _("Target Directory:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer21->Add(m_staticText24, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_dirPickerTargetDir = new wxDirPickerCtrl(this, wxID_ANY, wxEmptyString, wxT("Select a folder"), wxDefaultPosition, wxSize(-1,-1), wxDIRP_DEFAULT_STYLE|wxDIRP_DIR_MUST_EXIST);
    m_dirPickerTargetDir->SetToolTip(_("Clone the sources into this target directory"));
    
    flexGridSizer21->Add(m_dirPickerTargetDir, 0, wxALL|wxEXPAND, 5);
    
    flexGridSizer21->Add(0, 0, 0, wxALL, 5);
    
    m_checkBoxUseLogin = new wxCheckBox(this, wxID_ANY, _("Use login credentials:"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_checkBoxUseLogin->SetValue(false);
    
    flexGridSizer21->Add(m_checkBoxUseLogin, 0, wxALL|wxALIGN_LEFT, 5);
    
    m_staticText28 = new wxStaticText(this, wxID_ANY, _("Username:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer21->Add(m_staticText28, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_textCtrlUsername = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer21->Add(m_textCtrlUsername, 0, wxALL|wxEXPAND, 5);
    
    m_staticText30 = new wxStaticText(this, wxID_ANY, _("Password:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer21->Add(m_staticText30, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_textCtrlPassword = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_PASSWORD);
    
    flexGridSizer21->Add(m_textCtrlPassword, 0, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* boxSizer18 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer17->Add(boxSizer18, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_buttonOK = new wxButton(this, wxID_OK, _("&OK"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_buttonOK->SetDefault();
    
    boxSizer18->Add(m_buttonOK, 0, wxALL, 5);
    
    m_button20 = new wxButton(this, wxID_CANCEL, _("&Cancel"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    boxSizer18->Add(m_button20, 0, wxALL, 5);
    
    
    SetSizeHints(500,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_staticText28->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(gitCloneDlgBaseClass::OnUseCredentialsUI), NULL, this);
    m_textCtrlUsername->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(gitCloneDlgBaseClass::OnUseCredentialsUI), NULL, this);
    m_staticText30->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(gitCloneDlgBaseClass::OnUseCredentialsUI), NULL, this);
    m_textCtrlPassword->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(gitCloneDlgBaseClass::OnUseCredentialsUI), NULL, this);
    m_buttonOK->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(gitCloneDlgBaseClass::OnOKUI), NULL, this);
    
}

gitCloneDlgBaseClass::~gitCloneDlgBaseClass()
{
    m_staticText28->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(gitCloneDlgBaseClass::OnUseCredentialsUI), NULL, this);
    m_textCtrlUsername->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(gitCloneDlgBaseClass::OnUseCredentialsUI), NULL, this);
    m_staticText30->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(gitCloneDlgBaseClass::OnUseCredentialsUI), NULL, this);
    m_textCtrlPassword->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(gitCloneDlgBaseClass::OnUseCredentialsUI), NULL, this);
    m_buttonOK->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(gitCloneDlgBaseClass::OnOKUI), NULL, this);
    
}

GitConsoleBase::GitConsoleBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterpca4kKInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer36 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer36);
    
    m_splitter = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxSP_LIVE_UPDATE|wxSP_3D);
    m_splitter->SetSashGravity(0.500000);
    m_splitter->SetMinimumPaneSize(10);
    
    boxSizer36->Add(m_splitter, 1, wxALL|wxEXPAND, 5);
    
    m_splitterPage96 = new wxPanel(m_splitter, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    
    wxBoxSizer* boxSizer92 = new wxBoxSizer(wxVERTICAL);
    m_splitterPage96->SetSizer(boxSizer92);
    
    m_auibar = new wxAuiToolBar(m_splitterPage96, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxAUI_TB_DEFAULT_STYLE);
    m_auibar->SetToolBitmapSize(wxSize(16,16));
    
    boxSizer92->Add(m_auibar, 0, wxEXPAND, 5);
    
    m_auibar->AddTool(wxID_CLEAR, _("Clear Log"), wxXmlResource::Get()->LoadBitmap(wxT("clear")), wxNullBitmap, wxITEM_NORMAL, _("Clear Log"), _("Clear Log"), NULL);
    
    m_auibar->AddTool(wxID_ABORT, _("m_toolKill"), wxXmlResource::Get()->LoadBitmap(wxT("stop")), wxNullBitmap, wxITEM_NORMAL, _("Terminate git process"), _("Terminate git process"), NULL);
    m_auibar->Realize();
    
    m_dvListCtrl = new wxDataViewListCtrl(m_splitterPage96, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxDV_NO_HEADER|wxDV_ROW_LINES|wxDV_SINGLE);
    
    boxSizer92->Add(m_dvListCtrl, 1, wxEXPAND, 2);
    
    m_splitterPage100 = new wxPanel(m_splitter, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_splitter->SplitVertically(m_splitterPage96, m_splitterPage100, 0);
    
    wxBoxSizer* boxSizer94 = new wxBoxSizer(wxVERTICAL);
    m_splitterPage100->SetSizer(boxSizer94);
    
    m_auibar100 = new wxAuiToolBar(m_splitterPage100, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxAUI_TB_DEFAULT_STYLE);
    m_auibar100->SetToolBitmapSize(wxSize(16,16));
    
    boxSizer94->Add(m_auibar100, 0, wxEXPAND, 5);
    
    m_auibar100->AddTool(XRCID("git_console_add_file"), _("Add file"), wxXmlResource::Get()->LoadBitmap(wxT("git-add-file")), wxNullBitmap, wxITEM_NORMAL, _("Add file"), _("Add file"), NULL);
    
    m_auibar100->AddTool(XRCID("git_console_reset_file"), _("Reset File"), wxXmlResource::Get()->LoadBitmap(wxT("git-reset")), wxNullBitmap, wxITEM_NORMAL, _("Reset File"), _("Reset File"), NULL);
    m_auibar100->Realize();
    
    m_dvFiles = new wxDataViewCtrl(m_splitterPage100, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxDV_ROW_LINES|wxDV_MULTIPLE);
    
    m_dvFilesModel = new DataViewFilesModel;
    m_dvFilesModel->SetColCount( 1 );
    m_dvFiles->AssociateModel(m_dvFilesModel.get() );
    
    boxSizer94->Add(m_dvFiles, 1, wxEXPAND, 5);
    
    m_dvFiles->AppendIconTextColumn(_("File List"), m_dvFiles->GetColumnCount(), wxDATAVIEW_CELL_INERT, 1000, wxALIGN_LEFT);
    
    SetSizeHints(500,300);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    this->Connect(wxID_CLEAR, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(GitConsoleBase::OnClearGitLog), NULL, this);
    this->Connect(wxID_CLEAR, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(GitConsoleBase::OnClearGitLogUI), NULL, this);
    this->Connect(wxID_ABORT, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(GitConsoleBase::OnStopGitProcess), NULL, this);
    this->Connect(wxID_ABORT, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(GitConsoleBase::OnStopGitProcessUI), NULL, this);
    this->Connect(XRCID("git_console_add_file"), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(GitConsoleBase::OnAddFile), NULL, this);
    this->Connect(XRCID("git_console_reset_file"), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(GitConsoleBase::OnResetFile), NULL, this);
    m_dvFiles->Connect(wxEVT_COMMAND_DATAVIEW_ITEM_CONTEXT_MENU, wxDataViewEventHandler(GitConsoleBase::OnContextMenu), NULL, this);
    
}

GitConsoleBase::~GitConsoleBase()
{
    this->Disconnect(wxID_CLEAR, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(GitConsoleBase::OnClearGitLog), NULL, this);
    this->Disconnect(wxID_CLEAR, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(GitConsoleBase::OnClearGitLogUI), NULL, this);
    this->Disconnect(wxID_ABORT, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(GitConsoleBase::OnStopGitProcess), NULL, this);
    this->Disconnect(wxID_ABORT, wxEVT_UPDATE_UI, wxUpdateUIEventHandler(GitConsoleBase::OnStopGitProcessUI), NULL, this);
    this->Disconnect(XRCID("git_console_add_file"), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(GitConsoleBase::OnAddFile), NULL, this);
    this->Disconnect(XRCID("git_console_reset_file"), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(GitConsoleBase::OnResetFile), NULL, this);
    m_dvFiles->Disconnect(wxEVT_COMMAND_DATAVIEW_ITEM_CONTEXT_MENU, wxDataViewEventHandler(GitConsoleBase::OnContextMenu), NULL, this);
    
}
